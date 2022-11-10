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

int		get_next_line(int fd, char **line)
{
	char		*t;
	static char	*m;
	int			g;

	if (fd < 0 || BUFFER_SIZE <= 0 || !line || read(fd, m, 0) == -1)
		return (-1);
	if (!(*line = (char*)malloc(sizeof(char))))
		exit(EXIT_FAILURE);
	**line = '\0';
	g = ft_readnwrite_buff(&m, &t, line, fd);
	if (g)
		return (g);
	if (!t)
		return (-1);
	if (t)
		free(t);
	t = NULL;
	g = ft_write_buff(&m, &t, line);
	if (g)
		return (g);
	return (0);
}
