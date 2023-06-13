#include <stdio.h>

void main() 
{
	int i = 200;
	int *ptr = &i;

	printf("i = %d\n", i);
	printf("&i = %p\n", &i);
	printf("*&i = %d\n", *&i);
	printf("\n");
	printf("ptr = %p\n", ptr);
	printf("*ptr = %d\n", *ptr);
	printf("&*ptr = %p\n", &*ptr);
}
