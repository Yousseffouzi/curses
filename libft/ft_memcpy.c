/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yofouzi <yofouzi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:38:13 by yofouzi           #+#    #+#             */
/*   Updated: 2024/10/28 19:14:58 by yofouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char *dst;
	const unsigned char *sc;

	dst = (unsigned char *)dest;
	sc = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dst[i] = sc[i];
		i++;
	}
	return (dest);
}
