/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamadi <ahamadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:20:50 by ahamadi           #+#    #+#             */
/*   Updated: 2024/11/19 11:22:01 by ahamadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// description of strnstr function: 
// The strnstr() function locates the first occurrence of the null-terminated string to_find in the string str, where not more than len characters are searched. Characters that appear after a `\0' character are not searched. Since the strnstr() function is a FreeBSD specific API, it should only be used when portability is not a concern.

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*to_find)
		return ((char *)str);
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] == to_find[j] && i + j < len)
		{
			if (!to_find[j + 1])
				return ((char *)str + i);
			j++;
		}
		i++;
	}
	return (0);
}