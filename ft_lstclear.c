/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahelper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:24:45 by ahelper           #+#    #+#             */
/*   Updated: 2020/11/11 19:24:50 by ahelper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *p;

	p = *lst;
	if (!*lst)
		return ;
	while (*lst)
	{
		p = p->next;
		del((*lst)->content);
		free(*lst);
		*lst = p;
	}
}
