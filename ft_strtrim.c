/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahelper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:36:51 by ahelper           #+#    #+#             */
/*   Updated: 2020/11/11 19:36:58 by ahelper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static size_t	ft_space_begin(char const *m, char const *n)
{
	unsigned long g;
	unsigned long h;

	h = 0;
	g = 0;
	while (n[g] != '\0' && m[h] != '\0')
	{
		if (m[h] == n[g])
		{
			h++;
			g = 0;
		}
		else
			g++;
	}
	return (h);
}

static size_t	ft_space_end(char const *x, char const *y)
{
	unsigned long c;
	unsigned long u;

	u = ft_strlen(x);
	if (u == 0)
		return (0);
	c = 0;
	u--;
	while (y[c] != '\0' && u != 0)
	{
		if (x[u] == y[c])
		{
			u--;
			c = 0;
		}
		else
			c++;
	}
	return (u + 1);
}

char			*ft_strtrim(char *s1, char const *set)
{
	unsigned long	j;
	unsigned long	i;
	char			*t;

	j = 0;
	i = 0;
	if (!s1)
		return (NULL);
	j = ft_space_begin(s1, set);
	i = ft_space_end(s1, set);
	if (*s1 == '\0' || j == ft_strlen(s1))
	{
		t = (char*)malloc(sizeof(char));
		if (!t)
			return (NULL);
		i = 0;
		j = 0;
	}
	else
		t = ft_substr(s1, (unsigned int)j, i - j);
	if (!t)
		return (NULL);
	t[(int)i - (int)j] = '\0';
	return (t);
}
