/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yofouzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 15:19:04 by yofouzi           #+#    #+#             */
/*   Updated: 2024/12/13 19:58:45 by yofouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_format(char c, va_list ap)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (c == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (c == 'i' || c == 'd')
		count += ft_putnbr(va_arg(ap, int));
	else if (c == 'u')
		count += ft_putunsigned(va_arg(ap, unsigned int));
	else if (c == 'x')
		count += ft_puthex(va_arg(ap, unsigned int));
	else if (c == 'X')
		count += ft_puthex_upper(va_arg(ap, unsigned int));
	else if (c == 'p')
		count += ft_printaddress(va_arg(ap, void *));
	else if (c == '%')
		count += ft_putchar('%');
	else
		count += ft_printf("%c%c", '%', c);
	return (count);
}

static int	print_format(const char *format, va_list ap)
{
	int	count;

	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			if (!*(++format))
				return (-1);
			count += check_format(*format, ap);
		}
		else
			count += ft_putchar(*format);
		if (count == -1)
			return (-1);
		format++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	count = 0;
	if (!format)
		return (-1);
	va_start(ap, format);
	count += print_format(format, ap);
	va_end(ap);
	return (count);
}
