/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperriol <bperriol@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:41:29 by bperriol          #+#    #+#             */
/*   Updated: 2022/11/11 18:44:37 by bperriol         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*previous;

	if (!lst || *lst == NULL || del == NULL)
		return ;
	current = *lst;
	while (current)
	{
		(*del)(current->content);
		previous = current;
		current = current->next;
		free(previous);
	}
	*lst = NULL;
}
