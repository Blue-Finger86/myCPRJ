#include <stdio.h>

int gugu(int a) {
	for(int i = 1; i < 10; i++) {
		printf("%d X %d = %d\n", a, i, a*i);
	}
}

void main() {
	int a = 0;

	printf("출력하고 싶은 단을 입력 : ");
	scanf("%d", &a);

	gugu(a);
}
