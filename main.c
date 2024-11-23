// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   main.c                                             :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: ahamadi <ahamadi@student.42.fr>            +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2024/11/17 22:02:24 by ahamadi           #+#    #+#             */
// /*   Updated: 2024/11/17 22:48:39 by ahamadi          ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

#include "libft.h"

// int main() {
// 	int a = 2;
// 	unsigned char *p = (unsigned char *)&a;
// 	int b = 1337;
// 	unsigned char *p2 = (unsigned char *)&b;
// 	int i = 0;
// 	while (i < sizeof(a))
// 	{
// 		ft_memset(p + i, p2[i], 1);
// 		i++;
// 	}
// 	printf("%d", a);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// void set_integer_value(int *value, int new_value) {
//     unsigned char *byte_ptr = (unsigned char *)value; // Treat the integer as bytes
//     unsigned char *source_ptr = (unsigned char *)&new_value; // Get the bytes of new_value

//     // Use memset to set each byte of the integer
//     memset(byte_ptr, source_ptr[0], 1);  // Set the first byte
//     memset(byte_ptr + 1, source_ptr[1], 1);  // Set the second byte
//     memset(byte_ptr + 2, source_ptr[2], 1);  // Set the third byte
//     memset(byte_ptr + 3, source_ptr[3], 1);  // Set the fourth byte
// }

// int main() {
//     int value = 0;

//     set_integer_value(&value, 1337);  // Set the integer to 1337

//     printf("Value: %d\n", value);  // Output the resulting value
//     return 0;
// }

int main() {
    int a = 2;
    int b = 1337;
    ft_memcpy(&a, &b, sizeof(a));  // Copies all bytes from b to a
    printf("%d psssssssss\n", a);    // Output: 1337


    // code to test ft_lstnew
    t_list *node = ft_lstnew("Hello, World!");
    printf("%s\n", (char *)node->content);
    

    return 0;
}
