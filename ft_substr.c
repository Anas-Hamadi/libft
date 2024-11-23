/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamadi <ahamadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:05:16 by ahamadi           #+#    #+#             */
/*   Updated: 2024/11/22 18:25:22 by ahamadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{	
	size_t	slen;
	
	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	
	char* ss = (char*)s;
	ss = ss + start;
	char* sub = (char*)malloc((len+1 ) * sizeof(char));
	char* rsub = sub;
	while (ss && len--)
	{
		*sub = *ss;
		sub++;
		ss++;
	}
	*sub = '\0';
	
	return rsub;
}
