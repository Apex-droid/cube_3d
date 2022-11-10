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

void	sprite_prop(int *line_height)
{
	g_sprite.inte_x = g_sprite.inte_x - g_sprite.begin_x;
	g_sprite.inte_y = g_sprite.inte_y - g_sprite.begin_y;
	g_texture5.wall_x = sqrt(g_sprite.inte_x
	* g_sprite.inte_x + g_sprite.inte_y * g_sprite.inte_y);
	*line_height = (int)((double)g_wi.width / g_sprite.dist * 0.75);
}
