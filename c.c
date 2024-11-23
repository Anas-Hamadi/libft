// #include <stdio.h>

// int my_tolower(int c) {
//     if (c >= 'A' && c <= 'Z') {
//         return c + 32;
//     }
//     return c;
// }

// int main() {
// 	// i want to use this character �, but in terminal it is not visible, what should i do? 
//     unsigned char ch = 255; 
//     printf("Original: %c, Lowercase: %c\n", ch, my_tolower(ch));
//     putchar(my_tolower(ch));
//     return 0;
// }

// #include <stdio.h>

// int my_tolower(int c) {
//     if (c >= 'A' && c <= 'Z') {
//         return c + 32;
//     }
//     return c;
// }

// int main() {
//     unsigned char ch = 255; // ASCII value for 'ÿ'
//     printf("Original: %c, Lowercase: %c\n", ch, my_tolower(ch));
//     putchar(my_tolower(ch));
//     return 0;
// }

#include "libft.h"

int main() {
	size_t a;
    // unsigned int x = 1337;
    // unsigned char *p = (unsigned char *)&x;

    // printf("Memory representation: ");
    // for (int i = 0; i < sizeof(x); i++) {
    //     printf("%02X ", p[i]);  // Print each byte in memory
    // }
    // printf("\n");

	int a = 2;
	unsigned char *p = (unsigned char *)&a;
	int b = -1337;
	unsigned char *p2 = (unsigned char *)&b;
	int i = 0;
	while (i < sizeof(a))
	{
		ft_memset(p + i, p2[i], 1);
		i++;
	}

	// ft_memset(p, 57, 1);
	// ft_memset(p + 1, 5, 1);

	printf("%d>>>>>>", a);
	
    return 0;
}
