#include <stdio.h>

int a = 1000;

void func1() {
	int a = 500;
	printf("func1()에서 a의 값 ==> %d\n", a);

	a = 700;
	printf("a값 변경 후 출력되는 a의 값 ==> %d\n", a);
}


void main() {
	func1();
	printf("main() 에서 a의 값 ==> %d\n", a);
	//순서에 의하면 500, 700, 1000 출력되어야 함.

}
