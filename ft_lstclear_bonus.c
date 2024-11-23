/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamadi <ahamadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 21:40:01 by ahamadi           #+#    #+#             */
/*   Updated: 2024/11/21 21:55:15 by ahamadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	if(!lst || !del)
		return;
	t_list* t;
	t = *lst;
	while (*lst)
	{	
		t = *lst;
		(*del)((void*)t);
		*lst = (*lst)->next;
	}
	lst = NULL;
}