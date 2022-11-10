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

static void		texnres(char ***mapa, int *k)
{
	if (***mapa == 'R' && *(**mapa + 1) == ' ')
		restake(mapa, k);
	else if (***mapa != '\0' && ***mapa == 'N' && *(**mapa + 1) == 'O'
	&& *(**mapa + 2) == ' ')
		g_texture3.relative_path = taketex(mapa, k);
	else if (***mapa != '\0' && ***mapa == 'S' && *(**mapa + 1) == 'O'
	&& *(**mapa + 2) == ' ')
		g_texture4.relative_path = taketex(mapa, k);
	else if (***mapa != '\0' && ***mapa == 'E' && *(**mapa + 1) == 'A'
	&& *(**mapa + 2) == ' ')
		g_texture2.relative_path = taketex(mapa, k);
	else if (***mapa != '\0' && ***mapa == 'W' && *(**mapa + 1) == 'E'
	&& *(**mapa + 2) == ' ')
		g_texture1.relative_path = taketex(mapa, k);
	else
		get_error();
}

void			get_info(char ***mapa)
{
	int k;

	k = 0;
	voidstringskip(mapa);
	while (k < 8)
	{
		if (***mapa != '\0' && ***mapa == 'S' && *(**mapa + 1) == ' ')
			g_texture5.relative_path = taketex(mapa, &k);
		else if (***mapa != '\0' && ***mapa == 'F' && *(**mapa + 1) == ' ')
			g_fc = takecolor(mapa, &k);
		else if (***mapa != '\0' && ***mapa == 'C' && *(**mapa + 1) == ' ')
			g_cc = takecolor(mapa, &k);
		else
			texnres(mapa, &k);
	}
}
