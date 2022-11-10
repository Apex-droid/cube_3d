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

void	collision_plus(double *step_x, double *step_y)
{
	if (g_person.world_map[(int)(g_person.pos_x + *step_x)]
		[(int)(g_person.pos_y)] != '1')
		g_person.pos_x += *step_x;
	if (g_person.world_map[(int)(g_person.pos_x)]
		[(int)(g_person.pos_y + *step_y)] != '1')
		g_person.pos_y += *step_y;
}
