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

void	splitskip(char ***mapa)
{
	digitskip(mapa);
	**mapa = ft_spaces(**mapa);
	commaskip(mapa);
	**mapa = ft_spaces(**mapa);
	if (!ft_isdigit(***mapa))
	{
		write(1, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
}
