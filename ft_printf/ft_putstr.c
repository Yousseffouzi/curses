/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yofouzi <yofouzi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:43:17 by yofouzi           #+#    #+#             */
/*   Updated: 2024/11/25 22:46:13 by yofouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str)
{
	if (str)
	{
		while (*str)
		{
			ft_putchar(*str);
			str++;
		}
	}
}
int main()
{
	ft_putstr("Youssef fouzi 2004");
}
