/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperriol <bperriol@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:25:20 by bperriol          #+#    #+#             */
/*   Updated: 2022/11/11 18:39:28 by bperriol         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	size_t			size;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		size = 0;
	else
		size = ft_strlen(s + start);
	if (size > len)
		size = len;
	str = malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s + start, size + 1);
	return (str);
}
