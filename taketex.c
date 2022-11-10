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

char	*taketex(char ***mapa, int *k)
{
	char	*pass;
	char	set[7];
	int		i;
	char	*buff;

	buff = **mapa;
	pass = NULL;
	i = 0;
	set[0] = 9;
	set[1] = 10;
	set[2] = 11;
	set[3] = 12;
	set[4] = 13;
	set[5] = 32;
	set[6] = '\0';
	**mapa = **mapa + 2;
	**mapa = ft_spaces(**mapa);
	i = spacelen(**mapa);
	pass = passcre(i, *mapa);
	pass_err(pass);
	**mapa = **mapa + i;
	all_skip(mapa, &buff);
	(*k)++;
	return (pass);
}
