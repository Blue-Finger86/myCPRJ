#include <stdio.h>

void main() {
	char ch;
	char *q;
	char *p;

	ch = 'A';
	q = &ch;
	p = q;
	*p = 'Z';

	printf("ch�� ������ �ִ� �� : ch ==> %c \n\n", ch);
}
