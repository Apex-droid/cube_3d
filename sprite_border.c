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

void	sprite_border(int map_x, int map_y)
{
	g_sprite.pos_x = (double)map_x + 0.5;
	g_sprite.pos_y = (double)map_y + 0.5;
	g_sprite.begin_y = g_sprite.pos_y - 0.5
	* g_person.plane_y / g_person.plane_scale;
	g_sprite.begin_x = g_sprite.pos_x - 0.5
	* g_person.plane_x / g_person.plane_scale;
	g_sprite.end_y = g_sprite.pos_y + 0.5
	* g_person.plane_y / g_person.plane_scale;
	g_sprite.end_x = g_sprite.pos_x + 0.5
	* g_person.plane_x / g_person.plane_scale;
}
