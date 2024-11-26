/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yofouzi <yofouzi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:00:12 by yofouzi           #+#    #+#             */
/*   Updated: 2024/11/03 17:12:55 by yofouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	char	*join;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	join = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * (sizeof(char)));
	if (!join)
		return (NULL);
	while (s1[i])
	{
		join[j] = s1[i];
		i++;
		j++;
	}
	while (*s2)
	{
		join[j] = *s2;
		s2++;
		j++;
	}
	join[j] = '\0';
	return (join);
}
