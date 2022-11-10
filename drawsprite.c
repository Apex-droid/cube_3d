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

void	drawsprite(void)
{
	int		line_height;
	int		draw_end;
	int		draw_start;

	if (((g_sprite.inte_x - g_sprite.pos_x) * (g_sprite.inte_x -
	g_sprite.pos_x) + (g_sprite.inte_y - g_sprite.pos_y) *
	(g_sprite.inte_y - g_sprite.pos_y)) < 0.25)
	{
		sprite_prop(&line_height);
		g_texture5.tex_x =
		(int)(g_texture5.wall_x * (double)g_texture5.tex_width);
		draw_start = -line_height / 2 + g_wi.hight / 2;
		if (draw_start < 0)
			draw_start = 0;
		draw_end = line_height / 2 + g_wi.hight / 2;
		if (draw_end >= g_wi.hight)
			draw_end = g_wi.hight;
		g_texture5.step = (double)g_texture5.tex_height / (double)line_height;
		g_texture5.tex_pos = 0;
		if ((int)(double)g_wi.hight / 2 < (line_height / 2))
			g_texture5.tex_pos = (draw_start - (int)((double)g_wi.hight / 2)
		+ line_height / 2) * g_texture5.step;
		sprite_texput(draw_start, draw_end);
	}
}
