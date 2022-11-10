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

void	tex_prop(int *line_height, int side, t_tex *texture)
{
	*line_height = (int)((double)g_wi.width / g_poi.perp_wall_dist * 0.75);
	if (side == 0)
		texture->wall_x = g_person.pos_y
		+ g_poi.perp_wall_dist * g_poi.ray_dir_y;
	else
		texture->wall_x = g_person.pos_x
		+ g_poi.perp_wall_dist * g_poi.ray_dir_x;
	texture->wall_x -= floor((texture->wall_x));
}
