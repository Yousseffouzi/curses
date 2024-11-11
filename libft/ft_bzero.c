/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yofouzi <yofouzi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:37:15 by yofouzi           #+#    #+#             */
/*   Updated: 2024/10/28 18:04:31 by yofouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

/*int main()
{
	unsigned char	str[20];
	size_t	n;

	str[] = "Youssef FOUZI";
	n = 7;
	printf("befour apply ft_bzero on : '%s'", str);
	ft_bzero(str,n);
	printf("after apply ft_bzero on : '%s'", str);
	return (0);
}*/
