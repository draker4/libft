/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperriol <bperriol@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:03:28 by bperriol          #+#    #+#             */
/*   Updated: 2022/11/09 15:33:00 by bperriol         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*p;

	if (count * size == 0)
	{
		p = malloc(0);
		return (p);
	}
	if (count * size > SIZE_MAX)
		return (NULL);
	i = 0;
	p = malloc(size * count);
	if (p == NULL)
		return (NULL);
	while (i < count * size)
		((unsigned char *)p)[i++] = 0;
	return (p);
}
