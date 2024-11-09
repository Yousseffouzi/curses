/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yofouzi <yofouzi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:17:31 by yofouzi           #+#    #+#             */
/*   Updated: 2024/11/02 18:19:21 by yofouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t num, size_t size)
{
	void    *ptr;

    ptr = malloc(num * size);
    if (ptr == NULL)
        return (NULL);
    ft_bzero(ptr, num * size);
    return (ptr);
}
