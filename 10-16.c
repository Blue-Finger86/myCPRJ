#include <stdio.h>

int a = 1000;

void func1() {
	int a = 500;
	printf("func1()���� a�� �� ==> %d\n", a);

	a = 700;
	printf("a�� ���� �� ��µǴ� a�� �� ==> %d\n", a);
}


void main() {
	func1();
	printf("main() ���� a�� �� ==> %d\n", a);
	//������ ���ϸ� 500, 700, 1000 ��µǾ�� ��.

}
