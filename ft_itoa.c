/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperriol <bperriol@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:39:42 by bperriol          #+#    #+#             */
/*   Updated: 2022/11/10 10:30:15 by bperriol         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nb_char(int n)
{
	int	nb;

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

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	nb_char = ft_nb_char(n);
	str = malloc(sizeof(*str) * (nb_char + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n / 10)
	{
		str[nb_char - 1 - i++] = n % 10 + 48;
		n /= 10;
	}
	str[nb_char - 1 - i] = n % 10 + 48;
	str[nb_char] = '\0';
	return (str);
}
