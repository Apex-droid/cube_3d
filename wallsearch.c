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

void	wallsearch(int *side)
{
	int i;
	int j;

	if (g_poi.side_dist_x < g_poi.side_dist_y)
	{
		g_poi.side_dist_x += g_poi.delta_dist_x;
		g_poi.map_x += g_poi.step_x;
		j = g_poi.map_x;
		i = g_poi.map_y;
		*side = 0;
	}
	else
	{
		g_poi.side_dist_y += g_poi.delta_dist_y;
		g_poi.map_y += g_poi.step_y;
		j = g_poi.map_x;
		i = g_poi.map_y;
		*side = 1;
	}
	if (g_person.world_map[g_poi.map_x][g_poi.map_y] == '1')
		tex_realize(side);
	else
		wallsearch(side);
	if (g_person.world_map[j][i] == '2')
		searchndraw(i, j);
}
