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

unsigned int	takecolor(char ***mapa, int *k)
{
	unsigned int	j;
	unsigned int	i;
	char			*buff;

	buff = **mapa;
	(**mapa)++;
	**mapa = ft_spaces(**mapa);
	if (!ft_isdigit(***mapa))
	{
		write(1, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
	digit_take(&j, mapa);
	i = j * pow(16, 4);
	splitskip(mapa);
	digit_take(&j, mapa);
	i = j * pow(16, 2) + i;
	splitskip(mapa);
	digit_take(&j, mapa);
	i = j + i;
	all_skip(mapa, &buff);
	(*k)++;
	return (i);
}
