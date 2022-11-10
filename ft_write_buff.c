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

int		ft_write_buff(char **m1, char **t1, char **line1)
{
	int		h1;

	h1 = contains_n(*m1);
	if (h1 + 1)
	{
		buff_eater(&h1, m1, t1, line1);
		return (1);
	}
	else if (*m1)
	{
		free(*line1);
		*line1 = ft_substr(*m1, 0, ft_strlen(*m1));
		free(*m1);
		*m1 = NULL;
	}
	return (0);
}
