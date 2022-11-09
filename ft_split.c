/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperriol <bperriol@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:19:42 by bperriol          #+#    #+#             */
/*   Updated: 2022/11/09 16:00:34 by bperriol         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_find_next(char const *s, char c, size_t *i)
{
	while (s[*i])
	{
		if (s[*i] == c)
			return ;
		*i += 1;
	}
}

static char	**ft_cut(const char *s, char c, char **split)
{
	size_t	i;
	size_t	save;
	size_t	nb;
	size_t	k;

	i = 0;
	nb = 0;
	while (s[i])
	{
		save = i;
		ft_find_next(s, c, &i);
		if (save - i)
		{
			split[nb] = malloc(sizeof(**split) * (i - save + 1));
			if (split[nb] == NULL)
				return (NULL);
			k = 0;
			while (save < i)
				split[nb][k++] = s[save++];
			split[nb++][k] = '\0';
		}
		i++;
	}
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	save;
	int		nb_str;

	i = 0;
	nb_str = 0;
	while (s[i])
	{
		save = i;
		ft_find_next(s, c, &i);
		if (save - i)
			nb_str++;
		i++;
	}
	split = malloc(sizeof(*split) * (nb_str + 1));
	if (split == NULL)
		return (NULL);
	split[nb_str] = NULL;
	return (ft_cut(s, c, split));
}
