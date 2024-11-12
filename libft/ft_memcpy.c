/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yofouzi <yofouzi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:38:13 by yofouzi           #+#    #+#             */
/*   Updated: 2024/11/12 19:23:49 by yofouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dst;
	const unsigned char	*sc;

	if (!dest && !src)
		return (NULL);
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

/*int main()
{
	unsigned char	src[] = "YOUSSEF_fouzi";
	unsigned char	dest[50];
	size_t	n;
	char	*r;
	char	*r_r;
	
	n = 1;
	r = ft_memcpy(dest, src, n);
	r_r = memcpy(dest, src, n);
	dest[n] = '\0';
	printf("source: '%s', to dest: '%s',Up to n: %zu -> %s\n", src, dest, n, r);
	printf("source: '%s', to dest: '%s',Up to n: %zu -> %s", src, dest, n, r_r);
	return (0);
}*/
