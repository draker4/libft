/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperriol <bperriol@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:39:42 by bperriol          #+#    #+#             */
/*   Updated: 2022/11/09 17:45:53 by bperriol         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_nb_char(long n)
{
	long	nb;

	nb = 0;
	if (n < 0)
	{
		nb++;
		n = -n;
	}
	while (n / 10 != 0)
	{
		n /= 10;
		nb++;
	}
	return (++nb);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb_char;
	int		i;
	long	nb;

	nb = (long) n;
	nb_char = ft_nb_char(nb);
	printf("");
	str = malloc(sizeof(*str) * (nb_char + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (n / 10)
	{
		str[nb_char - 1 - i++] = nb % 10 + 48;
		nb /= 10;
	}
	str[nb_char - 1 - i] = nb % 10 + 48;
	str[nb_char] = '\0';
	return (str);
}
