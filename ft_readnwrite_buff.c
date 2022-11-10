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

int		ft_readnwrite_buff(char **m2, char **t2, char **line2, int fd2)
{
	int h2;

	while ((*t2 = (char*)malloc(sizeof(char) * (BUFFER_SIZE + 1)))
	&& (h2 = read(fd2, *t2, BUFFER_SIZE)))
	{
		*(*t2 + h2) = '\0';
		*m2 = ft_strjoin(m2, t2);
		h2 = contains_n(*m2);
		if (h2 + 1)
		{
			buff_eater(&h2, m2, t2, line2);
			return (1);
		}
	}
	if (!t2)
		exit(EXIT_FAILURE);
	return (0);
}
