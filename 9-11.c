#include<stdio.h>

void main()
{
	int a, b, imsi;
	int *p, *q;

	printf("a �� �Է� : ");
	scanf("%d", &a);
	printf("b �� �Է� : ");
	scanf("%d", &b);

	p = &a;
	q = &b;

	imsi = *p;
	*p = *q;
	*q = imsi;

	printf("�ٲ� �� a�� %d, b�� %d\n", a, b);
}
