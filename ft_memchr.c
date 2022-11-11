/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperriol <bperriol@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:39:53 by bperriol          #+#    #+#             */
/*   Updated: 2022/11/11 17:02:18 by bperriol         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n - 1 && *(unsigned char *)s != (unsigned char)c)
	{
		s++;
		i++;
	}
	if (*((unsigned char *)s) == (unsigned char)c && i < n)
		return ((void *)s);
	return (NULL);
}
