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

void	screen_limit(void)
{
	if (g_wi.hight > g_wi.max_hight || g_wi.hight == -1)
		g_wi.hight = g_wi.max_hight;
	if (g_wi.width > g_wi.max_width || g_wi.width == -1)
		g_wi.width = g_wi.max_width;
	g_wi.img = mlx_new_image(g_wi.mlx, g_wi.width, g_wi.hight);
	g_wi.addr = mlx_get_data_addr(g_wi.img, &g_wi.bpp,
	&g_wi.line_l, &g_wi.endian);
	g_wi.win = mlx_new_window(g_wi.mlx, g_wi.width, g_wi.hight, "cub3D");
}
