#include "libft.h"

int Add(int a, int b)
{
	return a + b;
}

int main()
{
	int (*f)(int, int);
	f = Add;

	printf("%d\n", f(1, 2));
	return 0;
}
