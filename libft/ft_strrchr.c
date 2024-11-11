/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yofouzi <yofouzi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 00:45:15 by yofouzi           #+#    #+#             */
/*   Updated: 2024/10/30 01:13:50 by yofouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			cc;
	const char		*last;

	last = NULL;
	i = 0;
	cc = (char)c;
	while (s[i])
	{
		if (s[i] == cc)
			last = &s[i];
		i++;
	}
	if (cc == '\0')
		return ((char *)&s[i]);
	return ((char *)last);
}
