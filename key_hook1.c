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

int		key_hook1(int keycode)
{
	if (keycode == 13)
	{
		g_button.w = 1;
		g_button.s = 0;
	}
	else if (keycode == 1)
	{
		g_button.s = 1;
		g_button.w = 0;
	}
	else if (keycode == 0)
	{
		g_button.a = 1;
		g_button.d = 0;
	}
	else if (keycode == 2)
	{
		g_button.d = 1;
		g_button.a = 0;
	}
	hook_turn(&keycode);
	hook_close(&keycode);
	return (0);
}
