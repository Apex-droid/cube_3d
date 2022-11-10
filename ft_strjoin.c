/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahelper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:13:44 by ahelper           #+#    #+#             */
/*   Updated: 2020/11/11 19:14:02 by ahelper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char **s1, char **s2)
{
	char		*u;
	size_t		y;
	size_t		x;

	y = ft_strlen(*s2);
	x = ft_strlen(*s1);
	if (!(u = (char*)malloc(x + y + 1)))
		exit(EXIT_FAILURE);
	if (!u)
		return (NULL);
	u[y + x] = '\0';
	while (y--)
		u[x + y] = *(*s2 + y);
	while (x--)
		u[x] = *(*s1 + x);
	if (*s1)
		free(*s1);
	*s1 = NULL;
	if (*s2)
		free(*s2);
	*s2 = NULL;
	return (u);
}
