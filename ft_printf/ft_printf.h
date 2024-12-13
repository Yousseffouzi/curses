/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yofouzi <yofouzi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:32:22 by yofouzi           #+#    #+#             */
/*   Updated: 2024/12/06 21:46:04 by yofouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int c);
int	ft_printf(const char *format, ...);
int	ft_putunsigned(unsigned int c);
int	ft_puthex_upper(unsigned int c);
int	ft_puthex(unsigned int c);
int	ft_printaddress(void *ptr);

#endif
