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

void	free_buff1(void *buff)
{
	int i;

	i = ft_strlen((char*)buff);
	while (i--)
	{
		*((char*)buff + i) = '\0';
	}
	free(buff);
	buff = NULL;
}

int		string_check(char *string)
{
	string = ft_spaces(string);
	if (*string == '1')
		return (1);
	else
		return (0);
}

char	**mapmaking(t_list **stru, size_t size)
{
	char	**karta;
	int		i;
	int		k;
	t_list	*tmp;

	i = -1;
	k = 0;
	tmp = *stru;
	karta = (char**)malloc(sizeof(char*) * (size + 1));
	while (tmp)
	{
		karta[++i] = ft_strdup(tmp->content);
		tmp = tmp->next;
		if (k == 0 && string_check(karta[i]))
		{
			g_string_number = i;
			k = 1;
		}
	}
	ft_lstclear(stru, &free_buff1);
	karta[++i] = (char*)malloc(sizeof(char));
	karta[i][0] = '\0';
	g_string_number = i - g_string_number;
	return (karta);
}
