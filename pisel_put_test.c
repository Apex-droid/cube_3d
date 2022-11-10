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

int		main(int argc, char **argv)
{
	pars(argc, argv[1], &(g_person.world_map));
	g_wi.mlx = mlx_init();
	texture_add();
	g_person.plane_scale = 0.66;
	mlx_get_screen_size(g_wi.mlx, &g_wi.max_width, &g_wi.max_hight);
	if (argc == 3 && to_point_cube(&argv[1]) && !ft_strncmp(argv[1], ".cub", 5)
	&& !ft_strncmp(argv[2], "--save", 7))
		screen_shot();
	else if (argc == 2 && to_point_cube(&argv[1])
	&& !ft_strncmp(argv[1], ".cub", 5))
		screen_limit();
	else
	{
		write(1, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
	do_draw_frame();
	mlx_hook(g_wi.win, 17, 1L << 17, hook_close_cross, &g_button);
	mlx_hook(g_wi.win, 2, 1L << 0, key_hook1, &g_button);
	mlx_hook(g_wi.win, 3, 1L << 1, key_hook0, &g_button);
	mlx_loop_hook(g_wi.mlx, key_relise, &g_button);
	mlx_loop(g_wi.mlx);
	return (0);
}
