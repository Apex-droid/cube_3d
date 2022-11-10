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

void	turn(void)
{
	if (g_button.left == 1 && g_button.right == 0)
		g_person.dir += 5.0;
	if (g_button.right == 1 && g_button.left == 0)
		g_person.dir -= 5.0;
	if (g_person.dir < 0)
		g_person.dir = 360 + g_person.dir;
	if (g_person.dir > 360)
		g_person.dir = g_person.dir - 360;
	g_person.plane_x = cos(M_PI / 180 * (g_person.dir - 90)) * 0.66;
	g_person.plane_y = sin(M_PI / 180 * (g_person.dir - 90)) * 0.66;
	g_person.dir_x = cos(M_PI / 180 * g_person.dir);
	g_person.dir_y = sin(M_PI / 180 * g_person.dir);
}
