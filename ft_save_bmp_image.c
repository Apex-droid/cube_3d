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

void	ft_save_bmp_image(void)
{
	int		fd;
	int		size;

	while ((int)g_wi.width % 4 != 0)
		g_wi.width--;
	size = 54 + (4 * g_wi.width * g_wi.hight);
	if (!(fd = open("screen.bmp", O_WRONLY | O_CREAT |
		O_TRUNC | O_APPEND, 0666)))
	{
		write(1, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
	bmp_header(size, fd);
	get_pixel(fd);
	close(fd);
	exit(0);
}
