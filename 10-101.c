#include <stdio.h>
int func1(int a, int b, int c) {
	int result = a + b + c;

	return result;
}

int func2(int* a, int* b, int* c) {
	int result = *a * *b * *c;

	return result;
}


void func3(int* a, int* b) {
	int tmp = 0; 

	tmp = *a;
	*a = *b;
	*b = tmp;

	printf("3�� �Լ� ȣ��Ǿ����ϴ�. ����� %d�� %d�Դϴ�.", a, b);
}


void main() {
	int a = 5, b = 7, c = 3;

	printf("1�� �Լ� ȣ���� ����� a+b+c ==> %d\n", func1(a, b, c));

	int res2 = func2(&a, &b, &c);
	printf("2�� �Լ� ȣ���� ����� &a X &b X &c ==> %d\n", res2);

	func3(&a, &b);
}
