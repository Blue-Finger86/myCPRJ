#include <stdio.h>

void main() {
	char ch;
	char *q;
	char *p;

	ch = 'A';
	q = &ch;
	p = q;
	*p = 'Z';

	printf("ch가 가지고 있는 값 : ch ==> %c \n\n", ch);
}
