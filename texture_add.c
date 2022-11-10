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

void	texture_add(void)
{
	texprep(&g_texture1, g_texture1.relative_path);
	texprep(&g_texture2, g_texture2.relative_path);
	texprep(&g_texture3, g_texture3.relative_path);
	texprep(&g_texture4, g_texture4.relative_path);
	texprep(&g_texture5, g_texture5.relative_path);
}
