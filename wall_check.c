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

int		wall_check(char ***mapa, int i, int j)
{
	if (mapa[0][i][j] == '0' || mapa[0][i][j] == '2' || mapa[0][i][j] == 'N'
		|| mapa[0][i][j] == 'E' || mapa[0][i][j] == 'S' || mapa[0][i][j] == 'W')
		if (i == 0 || j == 0 || mapa[0][i + 1] == '\0' ||
			ft_strlen(mapa[0][i + 1]) <= (size_t)j ||
			ft_strlen(mapa[0][i - 1]) <= (size_t)j ||
			mapa[0][i][j + 1] == ' ' || mapa[0][i + 1][j] == ' ' ||
			mapa[0][i - 1][j] == ' ' || mapa[0][i][j - 1] == ' ' ||
			ft_check_wall_x(mapa[0][i], j) != 2 ||
			ft_check_wall_y(mapa[0], i, j) != 2)
		{
			write(1, "Error\n", 6);
			return (1);
		}
	return (0);
}
