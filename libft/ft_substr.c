/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yofouzi <yofouzi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 13:43:39 by yofouzi           #+#    #+#             */
/*   Updated: 2024/11/03 14:32:21 by yofouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(const char *str, unsigned int start, size_t n)
{
    size_t  i;
    size_t  str_n;
    char    *substr;

    i = 0;
    if (!str)
        return (NULL);
    str_n = ft_strlen(str);
    substr = (char *)malloc ((n + 1) * (sizeof(char)));
    if (!substr)
        return (NULL);
    if (n > str_n - start)
        n = str_n - start;
    if (start >= str_n)
        return (ft_calloc(1,sizeof(char)));
    while (i < n && str[start + i])
    {
        substr[i] = str[start + i];
        i++;
    }
    substr[i] = '\0';
    return (substr);
}
