#include<stdio.h>

void main()
{
	int a, b, imsi;
	int *p, *q;

	printf("a 값 입력 : ");
	scanf("%d", &a);
	printf("b 값 입력 : ");
	scanf("%d", &b);

	p = &a;
	q = &b;

	imsi = *p;
	*p = *q;
	*q = imsi;

	printf("바뀐 값 a는 %d, b는 %d\n", a, b);
}
