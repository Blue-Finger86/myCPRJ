#include <stdio.h>

void main()
{
	int a, b;
	char c;
	int w;

	printf("수식을 한줄로 띄어쓰기로 입력하세요 : ");
	scanf("%d %c %d", &a, &c, &b);


	if (c == '+' ) {
		w = 0;
	} else if (c == '-') {
		w = 1;
	} else if (c == '*') {
		w = 2;
	} else if (c == '/') {
		w = 3;
	} else if (c == '%') {
		w = 4;
	}

        
	switch(w) {

	case 0 : printf("%d + %d = %d 입니다.\n", a, b, a+b); break;
	case 1 : printf("%d - %d = %d 입니다.\n", a, b, a-b); break;
	case 2 : printf("%d * %d = %d 입니다.\n", a, b, a*b); break;
	case 3 : printf("%d / %d = %d 입니다.\n", a, b, a/b); break;
	case 4 : printf("%d %% %d = %d 입니다.\n", a, b, a%b); break;
        default: printf("연산자를 잘못 입력했습니다.");
	}
}
