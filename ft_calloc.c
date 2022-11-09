/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperriol <bperriol@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:03:28 by bperriol          #+#    #+#             */
/*   Updated: 2022/11/08 17:39:01 by bperriol         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	void	*result;
	size_t	i;
	int		first;

	i = 0;
	first = 1;
	while (i < count)
	{
		p = malloc(size);
		if (p == NULL)
			return (NULL);
		*(char *)p = 0;
		if (first)
		{
			result = p;
			first = 0;
		}
		p++;
		i++;
	}
	return (result);
}
