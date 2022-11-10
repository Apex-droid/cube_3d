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
#include "./minilibx_mms/mlx.h"

void		get_pixel(int fd)
{
	int		i;
	int		j;
	int		color;

	i = g_wi.hight - 1;
	while (i >= 0)
	{
		j = -1;
		while (++j < g_wi.width)
		{
			color = *(int*)(g_wi.addr +
			(i * g_wi.line_l + j * (g_wi.bpp / 8)));
			write(fd, &color, 3);
		}
		i--;
	}
}
