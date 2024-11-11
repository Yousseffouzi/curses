/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yofouzi <yofouzi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:34:24 by yofouzi           #+#    #+#             */
/*   Updated: 2024/11/06 14:49:26 by yofouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}
char	*ft_strtrim(const char *s, const char *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*trim;

	if (!s || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s);
	// find start
	while (s[start] && ft_check(s[start], set))
		start++;
	// find end
	while (end > start && ft_check(s[end - 1], set))
		end--;
	trim = ((char *)malloc((end - start + 1) * (sizeof(char))));
	if (!trim)
		return (NULL);
	i = 0;
	while (end > start)
	{
		trim[i] = s[start];
		i++;
		start++;
	}
	trim[i] = '\0';
	return (trim);
}
