/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamadi <ahamadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 21:51:46 by ahamadi           #+#    #+#             */
/*   Updated: 2024/11/22 15:59:25 by ahamadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list* iter = NULL;
	t_list* new = NULL;
	
	if (!lst || !f || !del)
		return NULL;

	iter = new;
	while (lst)
	{
		iter = ft_lstnew((*f)(lst->content));
		if (!iter)
		{
			(*del)((void*)iter->content);
			ft_lstclear(&iter, del);
			return NULL;
		}
		lst = lst->next;
		iter->next = ft_lstnew((*f)(lst->content));
	}
	return new;
}