/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamadi <ahamadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 21:11:26 by ahamadi           #+#    #+#             */
/*   Updated: 2024/11/16 21:12:37 by ahamadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// rewrite memmove function from libc
// description: The memmove() function copies n bytes from memory area src to memory area dest. The memory areas may overlap: copying takes place as though the bytes in src are first copied into a temporary array that does not overlap src or dest, and the bytes are then copied from the temporary array to dest.

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	if (ptr_dest < ptr_src)
	{
		while (n > 0)
		{
			*ptr_dest = *ptr_src;
			ptr_dest++;
			ptr_src++;
			n--;
		}
	}
	else
	{
		ptr_dest += n;
		ptr_src += n;
		while (n > 0)
		{
			ptr_dest--;
			ptr_src--;
			*ptr_dest = *ptr_src;
			n--;
		}
	}
	return (dest);
}