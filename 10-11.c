#include <stdio.h>

int gugu(int a) {
	for(int i = 1; i < 10; i++) {
		printf("%d X %d = %d\n", a, i, a*i);
	}
}

void main() {
	int a = 0;

	printf("����ϰ� ���� ���� �Է� : ");
	scanf("%d", &a);

	gugu(a);
}
