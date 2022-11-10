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

void	texdrow(t_tex *texture, int side)
{
	int line_height;
	int draw_start;
	int draw_end;

	tex_prop(&line_height, side, texture);
	tex_xx(&draw_start, line_height, texture, side);
	draw_end = line_height / 2 + g_wi.hight / 2;
	if (draw_end >= g_wi.hight)
		draw_end = g_wi.hight;
	tex_put(draw_start, draw_end, texture);
	g_wi.y = 0;
}
