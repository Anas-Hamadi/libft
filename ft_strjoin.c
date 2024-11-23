/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamadi <ahamadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:22:28 by ahamadi           #+#    #+#             */
/*   Updated: 2024/11/22 18:52:53 by ahamadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char *ft_strjoin(char const *s1, char const *s2)
{
	if(!s1 || !s2)
		return NULL;
	
	size_t i;
	size_t track;
	size_t len;
	len = ft_strlen(s1) + ft_strlen(s2);
	char* join = (char*)malloc((len + 1) *sizeof(char));

	if (!join)
        return NULL; 
	i = 0;
	while (s1[i])
	{
		join[i] = s1[i];
		i++;
	}
	track = i;
	i = 0;
	while (s2[i])
	{
		join[track++] = s2[i];
		i++;
	}
	join[track] = '\0';
	return join;
}