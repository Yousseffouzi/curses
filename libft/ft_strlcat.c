/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yofouzi <yofouzi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:25:02 by yofouzi           #+#    #+#             */
/*   Updated: 2024/10/28 16:33:51 by yofouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;
	size_t	j;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	i = dlen;
	j = 0;
	if (destsize <= dlen)
		return (destsize + slen);
	while (src[j] && j < destsize - dlen - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (slen + dlen);
}
