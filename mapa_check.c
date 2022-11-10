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

void	str_num_check(int i)
{
	if (i < g_string_number)
	{
		write(1, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
}

int		mapa_check(char ***mapa)
{
	int		i;
	int		j;
	int		m;

	m = 0;
	j = 0;
	i = 0;
	get_info(mapa);
	while (mapa[0][i][0] != '\0')
	{
		j = 0;
		while (mapa[0][i][j] != '\0')
		{
			if (simbol_check(mapa[0][i][j]) ||
			(!player_check(mapa[0][i][j], &m, j, i)) || wall_check(mapa, i, j))
				exit(EXIT_FAILURE);
			j++;
		}
		i++;
	}
	if (player_check(mapa[0][i][0], &m, j, i) == -1)
		exit(EXIT_FAILURE);
	str_num_check(i);
	return (0);
}
