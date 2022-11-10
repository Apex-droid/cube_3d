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

static int		player_pars_sn(char simb, int x, int y)
{
	if (simb == 'N')
	{
		g_person.pos_x = y + 0.5;
		g_person.pos_y = x + 0.5;
		g_person.dir = 90;
		g_person.plane_x = 0.66;
		g_person.plane_y = 0;
		g_person.dir_x = 0;
		g_person.dir_y = 1;
	}
	else if (simb == 'S')
	{
		g_person.pos_x = y + 0.5;
		g_person.pos_y = x + 0.5;
		g_person.dir = 270;
		g_person.plane_x = -0.66;
		g_person.plane_y = 0;
		g_person.dir_x = 0;
		g_person.dir_y = -1;
	}
	return (0);
}

static int		player_pars_ew(char simb, int x, int y)
{
	if (simb == 'E')
	{
		g_person.pos_x = y + 0.5;
		g_person.pos_y = x + 0.5;
		g_person.dir = 0;
		g_person.plane_x = 0;
		g_person.plane_y = -0.66;
		g_person.dir_x = 1;
		g_person.dir_y = 0;
	}
	else if (simb == 'W')
	{
		g_person.pos_x = y + 0.5;
		g_person.pos_y = x + 0.5;
		g_person.dir = 180;
		g_person.plane_x = 0;
		g_person.plane_y = 0.66;
		g_person.dir_x = -1;
		g_person.dir_y = 0;
	}
	return (0);
}

int				player_check(char simb, int *player, int x, int y)
{
	if (simb == 'N' || simb == 'E' || simb == 'S' || simb == 'W')
	{
		player_pars_sn(simb, x, y);
		player_pars_ew(simb, x, y);
		(*player)++;
	}
	if (*player > 1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (*player == 0 && simb == '\0')
	{
		write(1, "Error\n", 6);
		return (-1);
	}
	return (1);
}
