#include <stdio.h>

void main() {
	int a, b, tmp;
	int *p1, *p2;
	
	
	printf("a값 입력 : ");
	scanf("%d", &a);
	printf("b값 입력 : ");
	scanf("%d", &b);

	p1 = &a;
	p2 = &b;

	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;

	printf("바뀐 값 a는 %d, b는 %d", a, b);
}
