#include <stdio.h>

void func1(int *a, int *b, int *c) {
	printf("*a�� %d\n", a);
	printf("*b�� %d\n", b);
	printf("*c�� %d\n", c);

	int tmp = 0;
	tmp = *a;
	*a = *b;
	*b = *c;

	printf("a�� %d\n", *a);
	printf("b�� %d\n", *b);
	printf("c�� %d\n", *c);
}

void main() {
	int a = 10, b = 6, c = 4;

	printf("a�� %d\n", a);
	printf("b�� %d\n", b);
	printf("c�� %d\n", c);

	func1(&a, &b, &c);
}
