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

int		hook_close_cross(void)
{
	mlx_destroy_image(g_wi.mlx, g_wi.img);
	mlx_destroy_window(g_wi.mlx, g_wi.win);
	exit(EXIT_SUCCESS);
	return (0);
}
