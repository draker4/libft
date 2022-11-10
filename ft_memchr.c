/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperriol <bperriol@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:39:53 by bperriol          #+#    #+#             */
/*   Updated: 2022/11/10 18:40:49 by bperriol         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (*(unsigned char *)s != (unsigned char)c && i < n)
	{
		s++;
		i++;
	}
	if (*((unsigned char *)s) == (unsigned char)c && i < n)
		return ((void *)s);
	return (NULL);
}
