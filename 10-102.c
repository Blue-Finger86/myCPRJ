#include <stdio.h>

void func1(int *a, int *b, int *c) {
	printf("*a는 %d\n", a);
	printf("*b는 %d\n", b);
	printf("*c는 %d\n", c);

	int tmp = 0;
	tmp = *a;
	*a = *b;
	*b = *c;

	printf("a는 %d\n", *a);
	printf("b는 %d\n", *b);
	printf("c는 %d\n", *c);
}

void main() {
	int a = 10, b = 6, c = 4;

	printf("a는 %d\n", a);
	printf("b는 %d\n", b);
	printf("c는 %d\n", c);

	func1(&a, &b, &c);
}
