/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamadi <ahamadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:33:14 by ahamadi           #+#    #+#             */
/*   Updated: 2024/11/22 14:46:32 by ahamadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return;
	new->next = *lst;
	*lst = new;
	
}

int main()
{
	t_list* l = ft_lstnew((void*)0);
	t_list* c = l;
	t_list* tmp = l;
	t_list* tf = l;
	t_list** track = &l;
	long i = 0;
	while (i < 3)
	{
		c->next = ft_lstnew((void*)++i);
		c = c->next;
	}
	c->next = NULL;
	
	t_list *new = ft_lstnew((void*)5);
	ft_lstadd_front(track, new);
	
	while (l)
	{
		printf("%ld\n",(long)l->content);
		l = l->next;	
	}
	i = 0;

	while (i++ < 3)
	{
		tmp = tf->next;
		free(tf);
		tf = tmp;
	}
	
	return 0;
}
