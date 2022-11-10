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

void	bmp_header(int file_size, int fd)
{
	unsigned char btr[54];

	ft_bzero(btr, 54);
	btr[0] = (unsigned char)('B');
	btr[1] = (unsigned char)('M');
	transfer(file_size, btr + 2);
	btr[10] = (unsigned char)(54);
	btr[14] = (unsigned char)(40);
	transfer(g_wi.width, btr + 18);
	transfer(g_wi.hight, btr + 22);
	btr[26] = (unsigned char)(1);
	btr[28] = (unsigned char)(24);
	write(fd, btr, 54);
}
