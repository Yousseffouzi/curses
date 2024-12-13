/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yofouzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:44:59 by yofouzi           #+#    #+#             */
/*   Updated: 2024/12/06 18:09:18 by yofouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int c)
{
	int		count;
	char	*hex;

	count = 0;
	hex = "0123456789abcdef";
	if (c > 15)
		count += ft_puthex(c / 16);
	count += ft_putchar(hex[c % 16]);
	return (count);
}
