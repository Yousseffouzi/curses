/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yofouzi <yofouzi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:43:17 by yofouzi           #+#    #+#             */
/*   Updated: 2024/12/06 15:45:06 by yofouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	count;

	count = 0;
	if (str)
	{
		while (*str)
		{
			count += ft_putchar(*str);
			str++;
		}
	}
	else
		count += ft_putstr("(null)");
	return (count);
}
