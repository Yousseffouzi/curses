/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printaddress.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yofouzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:37:46 by yofouzi           #+#    #+#             */
/*   Updated: 2024/12/06 21:46:56 by yofouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_put_hex(unsigned long long c)
{
	int		count;
	char	*hex;

	count = 0;
	hex = "0123456789abcdef";
	if (c > 15)
		count += ft_put_hex(c / 16);
	count += ft_putchar(hex[c % 16]);
	return (count);
}

int	ft_printaddress(void *ptr)
{
	unsigned long long	adress;
	int					count;

	adress = (unsigned long long)ptr;
	count = 0;
	if (adress == 0)
		count += ft_putstr("(nil)");
	else
	{
		count += ft_putstr("0x");
		count += ft_put_hex(adress);
	}
	return (count);
}
