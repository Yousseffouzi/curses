/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yofouzi <yofouzi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:37:24 by yofouzi           #+#    #+#             */
/*   Updated: 2024/11/14 23:37:09 by yofouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needel, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needel == '\0')
		return ((char *)haystack);
	while (i < n && haystack[i])
	{
		j = 0;
		while (needel[j] && (i + j) < n && haystack[i + j] == needel[j])
			j++;
		if (!needel[j])
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
