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

void	sprite_texput(int draw_start, int draw_end)
{
	while (g_wi.y < draw_start)
		g_wi.y++;
	while (g_wi.y < draw_end)
	{
		g_texture5.tex_y = (int)g_texture5.tex_pos;
		g_texture5.tex_pos += g_texture5.step;
		g_texture5.color = *(unsigned int*)(g_texture5.addr + (g_texture5.tex_y
		* g_texture5.line_l + g_texture5.tex_x * (g_texture5.bpp / 8)));
		if (g_texture5.color != 00000000)
			my_mlx_pixel_put(&g_wi, g_wi.x, g_wi.y, g_texture5.color);
		g_wi.y++;
	}
	while (g_wi.y < g_wi.hight)
		g_wi.y++;
	g_wi.y = 0;
}
