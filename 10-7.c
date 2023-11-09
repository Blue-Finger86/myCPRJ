#include <stdio.h>

void func1() {
	printf("void형 함수는 돌려줄 것이 없다!\n");
}

int func2() {
	return 100;
}

void main() {
	int a;

	func1();

	a = func2();
	printf("int형 함수에서 돌려준 값은? %d\n", a);
}
