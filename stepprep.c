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

void	stepprep(void)
{
	if (g_poi.ray_dir_x < 0)
	{
		g_poi.step_x = -1;
		g_poi.side_dist_x = (g_person.pos_x - g_poi.map_x) * g_poi.delta_dist_x;
	}
	else
	{
		g_poi.step_x = 1;
		g_poi.side_dist_x = (g_poi.map_x + 1.0
		- g_person.pos_x) * g_poi.delta_dist_x;
	}
	if (g_poi.ray_dir_y < 0)
	{
		g_poi.step_y = -1;
		g_poi.side_dist_y = (g_person.pos_y - g_poi.map_y) * g_poi.delta_dist_y;
	}
	else
	{
		g_poi.step_y = 1;
		g_poi.side_dist_y = (g_poi.map_y + 1.0
		- g_person.pos_y) * g_poi.delta_dist_y;
	}
}
