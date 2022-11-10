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

char	*ft_substr(char *s, unsigned long start, size_t len)
{
	char	*y;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		if (!(y = (char*)malloc(sizeof(char))))
			exit(EXIT_FAILURE);
		if (!y)
			return (NULL);
		*y = '\0';
	}
	else
	{
		if (!(y = (char*)malloc(sizeof(char) * (len + 1))))
			exit(EXIT_FAILURE);
		if (!y)
			return (NULL);
		y = (char*)ft_memcpy(y, &s[start], len);
		y[len] = '\0';
	}
	return (y);
}
