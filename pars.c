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

int	pars(int argc, char *argv, char ***mapa)
{
	if (argc < 2 || open(argv, O_RDONLY) == -1)
	{
		write(1, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
	*mapa = makearr(argv);
	if (mapa_check(mapa))
		return (1);
	return (0);
}
