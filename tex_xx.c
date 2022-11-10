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

void	tex_xx(int *draw_start, int line_height, t_tex *texture, int side)
{
	*draw_start = -line_height / 2 + g_wi.hight / 2;
	texture->tex_x = (int)(texture->wall_x * (double)texture->tex_width);
	if (side == 0 && g_poi.ray_dir_x > 0)
		texture->tex_x = texture->tex_width - texture->tex_x - 1;
	if (side == 1 && g_poi.ray_dir_y < 0)
		texture->tex_x = texture->tex_width - texture->tex_x - 1;
	texture->step = (double)texture->tex_height / (double)line_height;
	texture->tex_pos = 0;
	if (*draw_start < 0)
		*draw_start = 0;
	if ((int)(double)g_wi.hight / 2 < (line_height / 2))
		texture->tex_pos = (*draw_start - (int)((double)g_wi.hight / 2)
		+ line_height / 2) * texture->step;
}
