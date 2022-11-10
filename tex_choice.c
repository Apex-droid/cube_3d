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

void	tex_choice(int side)
{
	if (side == 0 && g_poi.ray_dir_x < 0)
		texdrow(&g_texture1, side);
	if (side == 0 && g_poi.ray_dir_x > 0)
		texdrow(&g_texture2, side);
	if (side == 1 && g_poi.ray_dir_y > 0)
		texdrow(&g_texture3, side);
	if (side == 1 && g_poi.ray_dir_y < 0)
		texdrow(&g_texture4, side);
}
