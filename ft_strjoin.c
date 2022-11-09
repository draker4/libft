/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperriol <bperriol@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:03:33 by bperriol          #+#    #+#             */
/*   Updated: 2022/11/09 13:18:00 by bperriol         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	i = 0;
	j = 0;
	while (i < ft_strlen(s1))
	{
		str[i] = ((char *)s1)[i];
		i++;
	}
	while (i < ft_strlen(s1) + ft_strlen(s2))
		str[i++] = ((char *)s2)[j++];
	str[i] = '\0';
	return (str);
}
