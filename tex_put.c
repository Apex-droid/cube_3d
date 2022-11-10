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

void	tex_put(int draw_start, int draw_end, t_tex *texture)
{
	while (g_wi.y < draw_start)
	{
		my_mlx_pixel_put(&g_wi, g_wi.x, g_wi.y, g_cc);
		g_wi.y++;
	}
	while (g_wi.y < draw_end)
	{
		texture->tex_y = (int)texture->tex_pos;
		texture->tex_pos += texture->step;
		texture->color = *(unsigned int*)(texture->addr + (texture->tex_y
		* texture->line_l + texture->tex_x * (texture->bpp / 8)));
		my_mlx_pixel_put(&g_wi, g_wi.x, g_wi.y, texture->color);
		g_wi.y++;
	}
	while (g_wi.y < g_wi.hight)
	{
		my_mlx_pixel_put(&g_wi, g_wi.x, g_wi.y, g_fc);
		g_wi.y++;
	}
}
