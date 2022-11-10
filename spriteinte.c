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

void	spriteinte(void)
{
	if ((g_poi.ray_dir_x > 0.9 && g_poi.ray_dir_x < 1.1)
	|| (g_poi.ray_dir_x < -0.9 && g_poi.ray_dir_x > -1.1))
	{
		g_sprite.inte_y = (g_sprite.pos_y * g_person.plane_x * g_poi.ray_dir_y
		- g_sprite.pos_x * g_person.plane_y * g_poi.ray_dir_y + g_person.plane_y
		* g_person.pos_x * g_poi.ray_dir_y - g_person.plane_y * g_person.pos_y
		* g_poi.ray_dir_x) / ((g_person.plane_x * g_poi.ray_dir_y)
		- g_person.plane_y * g_poi.ray_dir_x);
		g_sprite.inte_x = (g_person.plane_x * (g_sprite.inte_y
		- g_sprite.pos_y)) / g_person.plane_y + g_sprite.pos_x;
	}
	else
	{
		g_sprite.inte_x = (g_sprite.pos_x * g_person.plane_y *
		g_poi.ray_dir_x - g_sprite.pos_y * g_person.plane_x *
		g_poi.ray_dir_x + g_person.plane_x * g_person.pos_y *
		g_poi.ray_dir_x - g_person.plane_x * g_person.pos_x *
		g_poi.ray_dir_y) / ((g_person.plane_y * g_poi.ray_dir_x)
		- g_person.plane_x * g_poi.ray_dir_y);
		g_sprite.inte_y = (g_person.plane_y * (g_sprite.inte_x
		- g_sprite.pos_x)) / g_person.plane_x + g_sprite.pos_y;
	}
}
