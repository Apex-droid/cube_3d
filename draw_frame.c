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

int		draw_frame(void)
{
	double	camera_x;
	int		hit;
	int		side;

	g_wi.y = 0;
	g_wi.x = 0;
	hit = 0;
	while (g_wi.x < g_wi.width)
	{
		rayprep(&camera_x);
		stepprep();
		wallsearch(&side);
		hit = 0;
		g_wi.x++;
	}
	return (0);
}
