/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yofouzi <yofouzi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 13:43:39 by yofouzi           #+#    #+#             */
/*   Updated: 2024/11/12 02:08:50 by yofouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *str, unsigned int start, size_t n)
{
	size_t	i;
	size_t	str_n;
	char	*substr;

	if (!str)
		return (NULL);
	str_n = ft_strlen(str);
	if (start >= str_n)
		return (ft_calloc(1, sizeof(char)));
	if (n > str_n - start)
		n = str_n - start;
	substr = (char *)malloc((n + 1) * (sizeof(char)));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < n && str[start + i])
	{
		substr[i] = str[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
