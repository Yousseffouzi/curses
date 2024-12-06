

#include "ft_printf.h"

int	chek_format(char c, va_list ap)
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
	else if (c == 'p')
		count += ft_printadress(va_arg(ap, void *));
	else if (c == 'x')
		count += ft_puthex(va_arg(ap, unsigned int));
        else if (c == 'X')
                count += ft_putHEX(va_arg(ap, unsigned int));
	else if (c == '%')
		count += ft_putchar('%');
	else
		count += ft_putchar(c);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int	count;

	va_start(ap, format);
	count = 0;
	while(*format)
	{
		if (*format == '%')
		{
			count += chek_format(*(++format),ap);

		}
		else
                        count += ft_putchar(*format);
		*format++;
	}
	va_end(ap);
	return (count);
}
