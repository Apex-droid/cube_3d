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

char	**makearr(char *argv)
{
	int		fd;
	char	*line;
	char	**mapa;
	t_list	*begin;

	begin = NULL;
	line = NULL;
	fd = open(argv, O_RDONLY);
	while (get_next_line(fd, &line) > 0)
	{
		ft_lstadd_back(&begin, ft_lstnew(line));
	}
	if (begin == NULL)
	{
		write(1, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
	ft_lstadd_back(&begin, ft_lstnew(line));
	mapa = mapmaking(&begin, ft_lstsize(begin));
	return (mapa);
}
