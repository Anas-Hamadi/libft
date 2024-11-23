/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamadi <ahamadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 21:11:27 by ahamadi           #+#    #+#             */
/*   Updated: 2024/11/22 14:52:45 by ahamadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

int ft_lstsize(t_list *lst)
{
	if (!lst)
		return (0);
	t_list* c;
	c = lst;
	int i = 0;
	while (c)
	{
		c = c->next;
		i++;
	}
	return i;
}