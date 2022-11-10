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

void	tex_realize(int *side)
{
	if (*side == 0)
		g_poi.perp_wall_dist = ((double)g_poi.map_x - g_person.pos_x
		+ (1 - g_poi.step_x) / 2) / g_poi.ray_dir_x;
	else
		g_poi.perp_wall_dist = ((double)g_poi.map_y - g_person.pos_y
		+ (1 - g_poi.step_y) / 2) / g_poi.ray_dir_y;
	tex_choice(*side);
}
