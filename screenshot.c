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

void	screen_shot(void)
{
	unsigned long i;

	i = (long int)g_wi.width * (long int)g_wi.hight;
	if (i > 536848900)
	{
		if (g_wi.width > 23170)
			g_wi.width = 23170;
		if (g_wi.hight > 23170)
			g_wi.hight = 23170;
	}
	g_wi.img = mlx_new_image(g_wi.mlx,
	g_wi.width, g_wi.hight);
	g_wi.addr = mlx_get_data_addr(g_wi.img, &g_wi.bpp,
	&g_wi.line_l, &g_wi.endian);
	draw_frame();
	ft_save_bmp_image();
	exit(EXIT_SUCCESS);
}
