/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yofouzi <yofouzi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:39:12 by yofouzi           #+#    #+#             */
/*   Updated: 2024/11/06 16:39:41 by yofouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(const char *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	is_there;

	i = 0;
	is_there = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && is_there == 0)
		{
			is_there = 1;
			count++;
		}
		else if (s[i] == c)
			is_there = 0;
		i++;
	}
	return (count);
}
static char	**free_result(char **str, int i)
{
	while (i > 0)
	{
		i--;
		free(str[i]);
	}
	free(str);
	return (0);
}
char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	count_words;
	size_t	start;
	char	**result;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	count_words = ft_count_words(s, c);
	result = (char **)malloc((count_words + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			result[j] = ft_substr(s, start, i - start);
			if (!result[j])
				return (free_result(result, j));
			j++;
		}
	}
	result[j] = NULL;
	return (result);
}
