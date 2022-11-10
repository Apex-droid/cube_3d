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

void	restake(char ***mapa, int *k)
{
	char *buff;

	buff = **mapa;
	(*k)++;
	(**mapa)++;
	**mapa = ft_spaces(**mapa);
	zeroskip(mapa);
	g_wi.width = ft_atoi(**mapa);
	if (g_wi.width == 0)
	{
		write(1, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
	digitskip(mapa);
	**mapa = ft_spaces(**mapa);
	zeroskip(mapa);
	g_wi.hight = ft_atoi(**mapa);
	if (g_wi.hight == 0)
	{
		write(1, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
	all_skip(mapa, &buff);
}
