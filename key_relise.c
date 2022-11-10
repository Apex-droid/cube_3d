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

int		key_relise(void)
{
	double step_x;
	double step_y;

	step_x = cos(g_person.dir * M_PI / 180) * 0.2;
	step_y = sin(g_person.dir * M_PI / 180) * 0.2;
	if (g_button.w == 1 && g_button.s == 0)
		collision_plus(&step_x, &step_y);
	if (g_button.s == 1 && g_button.w == 0)
		collision_minus(&step_x, &step_y);
	step_x = cos((g_person.dir + 90) * M_PI / 180) * 0.2;
	step_y = sin((g_person.dir + 90) * M_PI / 180) * 0.2;
	if (g_button.a == 1 && g_button.d == 0)
		collision_plus(&step_x, &step_y);
	step_x = cos((g_person.dir - 90) * M_PI / 180) * 0.2;
	step_y = sin((g_person.dir - 90) * M_PI / 180) * 0.2;
	if (g_button.d == 1 && g_button.a == 0)
		collision_plus(&step_x, &step_y);
	turn();
	do_draw_frame();
	return (0);
}
