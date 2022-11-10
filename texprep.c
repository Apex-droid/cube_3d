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

void	texprep(t_tex *textura, char *str)
{
	textura->img =
	mlx_xpm_file_to_image(g_wi.mlx, str,
	&(textura->tex_width), &(textura->tex_height));
	if (textura->img == NULL)
	{
		write(1, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
	textura->addr =
	mlx_get_data_addr(textura->img, &textura->bpp,
	&textura->line_l, &textura->endian);
}
