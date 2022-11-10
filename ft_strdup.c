/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahelper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:31:59 by ahelper           #+#    #+#             */
/*   Updated: 2020/11/11 19:32:03 by ahelper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup(const char *str)
{
	char			*v;
	unsigned long	i;

	i = ft_strlen(str) + 1;
	v = (char*)malloc(i);
	if (!v)
		return (0);
	while (*str != '\0')
		*v++ = *str++;
	*v = '\0';
	return (v - (i - 1));
}
