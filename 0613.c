#include <stdio.h>

void main() {
	int a = 5, b = 7, c = 3;
	int *d, *e, *f;

	d = &a;
	e = &b;
	f = &c;

	printf("a�� �� : %d\n", a);
	printf("a�� �ּ� �� : %d\n", d);
	printf("a�� ������ �� : %d\n", *d);
	printf("b�� �� : %d\n", b);
	printf("b�� �ּ� �� : %d\n", e);
	printf("b�� ������ �� : %d\n", *e);
	printf("c�� �� : %d\n", c);
	printf("c�� �ּ� �� : %d\n", f);
	printf("c�� ������ �� : %d\n", *f);

	printf("a = %d\n", a);
	printf("*d = %d\n", *d);
	printf("&a = %d\n", &a);
	printf("d = %d\n", d);
}
