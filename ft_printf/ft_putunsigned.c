/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yofouzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 17:36:16 by yofouzi           #+#    #+#             */
/*   Updated: 2024/12/06 17:36:40 by yofouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int c)
{
	int	count;

	count = 0;
	if (c > 9)
		count += ft_putunsigned(c / 10);
	count += ft_putchar((c % 10) + '0');
	return (count);
}
