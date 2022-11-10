/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperriol <bperriol@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:24:44 by bperriol          #+#    #+#             */
/*   Updated: 2022/11/10 14:03:55 by bperriol         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*begin;
	t_list	*current;

	if (lst == NULL)
		return (NULL);
	begin = ft_lstnew((*f)(lst->content));
	begin->next = ft_lstnew((*f)(lst->next->content));
	current = begin->next;
	lst = lst->next;
	while (lst->next)
	{
		current->next = ft_lstnew((*f)(lst->next->content));
		if (current->next->content == NULL)
			(*del)(current->next->content);
		else
			current = current->next;
		lst = lst->next;
	}
	return (begin);
}
