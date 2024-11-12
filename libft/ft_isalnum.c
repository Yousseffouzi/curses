/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yofouzi <yofouzi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:43:38 by yofouzi           #+#    #+#             */
/*   Updated: 2024/11/12 16:24:09 by yofouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
<<<<<<< HEAD

/*int main()
{
	int	c;

	c = '-';
	printf("isalnum :'%c' -> %d ",c ,ft_isalnum(c));
=======
/*int main()
{
    int c;

    c = 'h';
    printf("isalnum :'%c' -> %d ",c ,ft_isalnum(c));
>>>>>>> e5c6093bd691d0e04a461f69254d4a7f7510557c
}*/
