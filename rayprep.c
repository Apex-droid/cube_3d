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

void	rayprep(double *camera_x)
{
	(*camera_x) = 2 * g_wi.x / (double)g_wi.width - 1;
	g_poi.ray_dir_x = g_person.dir_x + g_person.plane_x * (*camera_x);
	g_poi.ray_dir_y = g_person.dir_y + g_person.plane_y * (*camera_x);
	g_poi.map_x = (int)(g_person.pos_x);
	g_poi.map_y = (int)(g_person.pos_y);
	if (g_poi.ray_dir_y == 0)
		g_poi.delta_dist_x = 0;
	else if (g_poi.ray_dir_x == 0)
		g_poi.delta_dist_x = 1;
	else
		g_poi.delta_dist_x = fabs(1 / g_poi.ray_dir_x);
	if (g_poi.ray_dir_x == 0)
		g_poi.delta_dist_y = 0;
	else if (g_poi.ray_dir_y == 0)
		g_poi.delta_dist_y = 1;
	else
		g_poi.delta_dist_y = fabs(1 / g_poi.ray_dir_y);
}
