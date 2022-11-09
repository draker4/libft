/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperriol <bperriol@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:39:53 by bperriol          #+#    #+#             */
/*   Updated: 2022/11/08 15:54:04 by bperriol         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	void	*p;
	size_t	i;

	p = (void *) s;
	i = 0;
	while (*((unsigned char *)p) != (unsigned char)c && i < n)
	{
		p++;
		i++;
	}
	if (*((unsigned char *)p) == (unsigned char)c)
		return (p);
	return (NULL);
}
