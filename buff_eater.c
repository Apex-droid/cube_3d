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

void	buff_eater(int *a, char **b, char **c, char **z)
{
	if (*z)
	{
		free(*z);
		*z = NULL;
	}
	if (**b == '\n')
	{
		if (!(*z = (char *)malloc(sizeof(char))))
			exit(EXIT_FAILURE);
		**z = '\0';
	}
	else
		*z = ft_substr(*b, 0, *a);
	*c = *b;
	*b = ft_substr((*b + *a + 1), 0, ft_strlen((*b + *a + 1)));
	free(*c);
	*c = NULL;
	return ;
}
