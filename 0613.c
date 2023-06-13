#include <stdio.h>

void main() {
	int a = 5, b = 7, c = 3;
	int *d, *e, *f;

	d = &a;
	e = &b;
	f = &c;

	printf("a의 값 : %d\n", a);
	printf("a의 주소 값 : %d\n", d);
	printf("a의 역참조 값 : %d\n", *d);
	printf("b의 값 : %d\n", b);
	printf("b의 주소 값 : %d\n", e);
	printf("b의 역참조 값 : %d\n", *e);
	printf("c의 값 : %d\n", c);
	printf("c의 주소 값 : %d\n", f);
	printf("c의 역참조 값 : %d\n", *f);

	printf("a = %d\n", a);
	printf("*d = %d\n", *d);
	printf("&a = %d\n", &a);
	printf("d = %d\n", d);
}
