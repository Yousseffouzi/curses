/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yofouzi <yofouzi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:47:33 by yofouzi           #+#    #+#             */
/*   Updated: 2024/11/09 17:47:59 by yofouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int len(long c)
{
    int i;

    i = 0;
    if (c <= 0)
        i = 1;
    while (c != 0)
    {
        c /= 10;
        i++;
    }
    return (i);
}
char    *ft_itoa(int c)
{
    int i;
    char    *str;
    long    nbr;

    nbr = c;
    i = len(nbr);
    str = (char *)malloc((i + 1) * sizeof(char));
    if (!str)
        return (NULL);
    str[i] = '\0';
    if (nbr == 0)
    {
        str[0] = '0';
        return (str);
    }
    if (nbr < 0)
    {
        str[0] = '-';
        nbr = -nbr;
    }
    while (nbr != 0)
    {
        str[--i] = (nbr % 10) + '0';
        nbr /= 10; 
    }
    return (str);
}
