/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamadi <ahamadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 11:34:42 by ahamadi           #+#    #+#             */
/*   Updated: 2024/11/18 00:32:40 by ahamadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
unsigned char	ft_isalpha(unsigned char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}


// int main(int argc, char const *argv[])
// {

// 	signed char v = EOF;
// 	printf("%d", v);
// 	return 0;
// }
