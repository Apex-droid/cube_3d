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

void	spriteprep(int map_y, int map_x)
{
	sprite_border(map_x, map_y);
	if (fabs(g_person.dir_x) < 0.0000001)
		g_sprite.dist = fabs(g_sprite.pos_y - g_person.pos_y);
	else if (fabs(g_person.dir_y) < 0.0000001)
		g_sprite.dist = fabs(g_sprite.pos_x - g_person.pos_x);
	else
	{
		g_sprite.dist_x = (g_sprite.pos_y * g_person.plane_x * g_person.dir_x
		- g_sprite.pos_x * g_person.plane_y * g_person.dir_x
		- g_person.plane_x * g_person.pos_y * g_person.dir_x
		+ g_person.plane_x * g_person.pos_x * g_person.dir_y)
		/ (-(g_person.plane_y * g_person.dir_x)
		+ g_person.plane_x * g_person.dir_y);
		g_sprite.dist_y = (g_person.plane_y * (g_sprite.dist_x
		- g_sprite.pos_x)) / g_person.plane_x + g_sprite.pos_y;
		g_sprite.dist_x = g_sprite.dist_x - g_person.pos_x;
		g_sprite.dist_y = g_sprite.dist_y - g_person.pos_y;
		g_sprite.dist = pow((g_sprite.dist_y * g_sprite.dist_y
		+ g_sprite.dist_x * g_sprite.dist_x), 0.5);
	}
}
