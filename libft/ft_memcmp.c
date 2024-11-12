/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yofouzi <yofouzi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:16:51 by yofouzi           #+#    #+#             */
/*   Updated: 2024/11/12 18:19:05 by yofouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ss1;
	const unsigned char	*ss2;
	size_t				i;

	i = 0;
	ss1 = (const unsigned char *)s1;
	ss2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (0);
}

/*int main()
{
	const char	*s1;
	const char	*s2;
	int	r;
	size_t	s;

	s1 = "Youssef Fouzi";
	s2 = "Youssef_Fouzi";
	s = 5;
	r = ft_memcmp(s1, s2, s);
	printf("commper between :1-'%s', 2-'%s' by lenght '%zu' -> %d",s1, s2, s, r);
	return (0);
}*/
