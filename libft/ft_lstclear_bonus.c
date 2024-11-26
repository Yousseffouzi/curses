/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yofouzi <yofouzi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 10:34:48 by yofouzi           #+#    #+#             */
/*   Updated: 2024/11/16 12:35:42 by yofouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*def)(void *))
{
	t_list	*current;
	t_list	*tmp;

	if (!lst || !def)
		return ;
	current = *lst;
	while (current)
	{
		tmp = current;
		current = current->next;
		def(tmp->content);
		free(tmp);
	}
	*lst = NULL;
}
