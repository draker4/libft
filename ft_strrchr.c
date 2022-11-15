/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperriol <bperriol@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:27:12 by bperriol          #+#    #+#             */
/*   Updated: 2022/11/15 16:30:55 by bperriol         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*p;

	i = 0;
	p = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			p = &((char *)s)[i];
		i++;
	}
	if (!(char)c)
		p = &((char *)s)[i];
	return (p);
}
