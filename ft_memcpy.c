/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamadi <ahamadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 21:10:27 by ahamadi           #+#    #+#             */
/*   Updated: 2024/11/16 21:11:10 by ahamadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// rewrite memcpy function from libc
// description: The memcpy() function copies n bytes from memory area src to memory area dest. The memory areas must not overlap. Use memmove(3) if the memory areas do overlap.

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	while (n > 0)
	{
		*ptr_dest = *ptr_src;
		ptr_dest++;
		ptr_src++;
		n--;
	}
	return (dest);
}