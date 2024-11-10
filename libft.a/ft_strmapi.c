/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yofouzi <yofouzi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 22:32:25 by yofouzi           #+#    #+#             */
/*   Updated: 2024/11/09 22:32:49 by yofouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    unsigned int    i;
    char    *str;

    if (!s || !f)
        return (NULL);
    str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
    if (!str)
        return (NULL);
    i = 0;
    while (s[i])
    {
        str[i] = (*f)(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}
