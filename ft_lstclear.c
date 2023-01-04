/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtasia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 14:10:01 by vtasia            #+#    #+#             */
/*   Updated: 2021/10/18 18:17:20 by vtasia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*buff;
	t_list	*list;

	list = *lst;
	if (lst != NULL && del != NULL)
	{
		while (list)
		{
			buff = list->next;
			del(list->content);
			free(list);
			list = buff;
		}
		*lst = NULL;
	}
}
