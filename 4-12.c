#include <stdio.h>

void main()
{
	int a = 10;

	printf("%d를 왼쪽 1회 시프트하면 %d이다. \n", a, a<<1);
	printf("%d를 왼쪽 2회 시프트하면 %d이다. \n", a, a<<2);
	printf("%d를 왼쪽 3회 시프트하면 %d이다. \n", a, a<<3);
}

