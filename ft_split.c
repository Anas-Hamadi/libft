// #include <stdlib.h>
// #include <stdio.h>

// int count2Deli(char const *str, char del){
// 	int counter = 0;

// 	while (*str)
// 	{
// 		if(*str == del && *(str + 1) != del && *(str + 1)){
// 			counter++;
// 		}
// 		str++;
// 	}
// 	return counter;
// }

// void ft_strncpy(char *dest, const char *src, int n) {
// 	int i = 0;
// 	while (i < n && src[i] != '\0') {
// 		dest[i] = src[i];
// 		i++;
// 	}
// 	while (i < n) {
// 		dest[i] = '\0';
// 		i++;
// 	}
// 	dest[i] = '\0';
// }

// char **ft_split(char const *s, char c){
// 	int i = 0;
// 	int cc = 0;
// 	int c2 = count2Deli(s, c);
// 	char **arr = (char**)malloc(sizeof(char*) * (c2 + 1));
// 	if (arr == NULL)
// 		return NULL;
// 	char const *index = s;
// 	char * nul = NULL;
// 	while (i < c2)
// 	{
// 		while (*s && *s == c) s++;
// 		index = s;
// 		while (*s != c && *s){
// 			cc++;
// 			s++;
// 		}
// 		arr[i] = (char*)malloc(sizeof(char) * (cc + 1));
// 		ft_strncpy(arr[i], index, cc);
// 		cc = 0;
// 		i++;
// 	}
// 	arr[i] = nul;
// 	return arr;	
// }



// int main()
// {
// 	char str[] = " Anas   Mouad Bican h";
// 	char **arr = ft_split(str, 'a');
// 	int i = 0;
// 	while (arr[i])
// 	{
// 		puts(arr[i]);
// 		printf("\n");
// 		i++;
// 	}
// 	i = 0;
// 	while (arr[i])
// 	{
// 		free(arr[i]);
// 		i++;
// 	}
	
// 	free(arr);
		
// 	return 0;
// }

#include <stdlib.h>
#include <stdio.h>

static int count2Deli(char const *str, char del) {
	int counter = 0;
	if (*str != del && *str) counter++;
	while (*str) {
		if (*str == del && *(str + 1) != del && *(str + 1)) {
			counter++;
		}
		str++;
	}
	return counter;
}

void ft_strncpy(char *dest, const char *src, int n) {
	int i = 0;
	while (i < n && src[i] != '\0') {
		dest[i] = src[i];
		i++;
	}
	while (i < n) {
		dest[i] = '\0';
		i++;
	}
	dest[i] = '\0';
}

void free_split(char **arr, int allocated) {
	for (int i = 0; i < allocated; i++) {
		free(arr[i]);
	}
	free(arr);
}

char **ft_split(char const *s, char c) {
	if (s == NULL)
		return NULL;
	
	int i = 0;
	int cc = 0;
	int c2 = count2Deli(s, c);
	char **arr = (char**)malloc(sizeof(char*) * (c2 + 1));
	if (arr == NULL)
		return NULL;
	
	const char *index = s;
	while (i < c2) {
		while (*s && *s == c) s++;
		index = s;
		while (*s != c && *s) {
			cc++;
			s++;
		}

		arr[i] = (char*)malloc(sizeof(char) * (cc + 1));
		if (arr[i] == NULL) {
			free_split(arr, i);
			return NULL;
		}
		ft_strncpy(arr[i], index, cc);
		cc = 0;
		i++;
	}
	arr[i] = NULL;
	return arr;
}

// int main() {
// 	char str[] = "    An a s h   ";
// 	int ccc = count2Deli(str, ' ');
// 	printf("%d\n\n", ccc);
// 	char **arr = ft_split(str, ' ');
// 	int i = 0;
// 	while (arr[i]) {
// 		puts(arr[i]);
// 		printf("\n");
// 		i++;
// 	}

// 	i = 0;
// 	while (arr[i]) {
// 		free(arr[i]);
// 		i++;
// 	}
// 	free(arr);
	
// 	return 0;
// }