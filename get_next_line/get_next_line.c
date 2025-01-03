/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yofouzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 21:09:26 by yofouzi           #+#    #+#             */
/*   Updated: 2024/12/29 23:45:59 by yofouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_free(char *s1, char *s2)
{
	free(s1);
	free(s2);
	return (NULL);
}

static char	*ft_read(int fd, char *stash)
{
	char	*buffer;
	char	*tmp;
	int		byts;

	if (!stash)
		stash = ft_strdup("");
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	byts = 1;
	while (!ft_strchr(stash, '\n') && byts > 0)
	{
		byts = read(fd, buffer, BUFFER_SIZE);
		if (byts < 0)
			return (ft_free(buffer, stash));
		buffer[byts] = '\0';
		tmp = ft_strjoin(stash, buffer);
		if (!tmp)
			return (ft_free(stash, buffer));
		free(stash);
		stash = tmp;
	}
	free(buffer);
	return (stash);
}

static char	*ft_get_line(char *stash)
{
	char	*line;
	int		i;

	i = 0;
	if (!stash || !stash[i])
		return (NULL);
	while (stash[i] && stash[i] != '\n')
		i++;
	if (stash[i] == '\n')
		i++;
	line = malloc(sizeof(char) * i + 1);
	if (!line)
		return (NULL);
	i = 0;
	while (stash[i] && stash[i] != '\n')
	{
		line[i] = stash[i];
		i++;
	}
	if (stash[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

static char	*ft_remaining(char *stash)
{
	char	*remaining;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	if (!stash[i])
	{
		free(stash);
		return (NULL);
	}
	remaining = malloc(sizeof(char) * (ft_strlen(stash) - i) + 1);
	if (!remaining)
	{
		free(stash);
		return (NULL);
	}
	i++;
	while (stash[i])
		remaining[j++] = stash[i++];
	remaining[j] = '\0';
	free(stash);
	return (remaining);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
	{
		free(stash);
		return (NULL);
	}
	stash = ft_read(fd, stash);
	if (!stash)
		return (NULL);
	line = ft_get_line(stash);
	stash = ft_remaining(stash);
	return (line);
}
