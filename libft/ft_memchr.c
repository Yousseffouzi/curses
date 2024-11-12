/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yofouzi <yofouzi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:29:18 by yofouzi           #+#    #+#             */
/*   Updated: 2024/11/12 17:19:58 by yofouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ss;
	unsigned char		cc;

	i = 0;
	ss = (const unsigned char *)s;
	cc = (unsigned char)c;
	while (i < n)
	{
		if (ss[i] == cc)
			return ((void *)(ss + i));
		i++;
	}
	return (NULL);
}

/*int main()
{
	const char	*s;
	int	c;
	char	*r;

	s = "Youssef fouzi";
	c = 'f';
	r = ft_memchr(s, c, 17);
	printf("apply memchr : search on '%c' in '%s' -> %s",c ,s ,r);
	return (0);
}*/
