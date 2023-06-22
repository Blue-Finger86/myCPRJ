#include <stdio.h>

void main() 
{
	char ch;
	int i;
	float f;
	double du;

	char* a = &ch;
	int* b = &i;
	float* c = &f;
	double* d = &du;

	//포인터 변수의 크기는 4 또는 8 바이트(운영체제에 따라서 달라짐, 64bit는 8byte)
	printf("sizeof(a) = %d\n", sizeof(a));
	printf("sizeof(b) = %d\n", sizeof(b));
	printf("sizeof(c) = %d\n", sizeof(c));
	printf("sizeof(d) = %d\n", sizeof(d));
	printf("\n");

	//포인터가 가리키는 건 당연히 가리키는 값의 데이터 타입에 따라서 달라짐 
	printf("sizeof(*a) = %d\n", sizeof(*a));
	printf("sizeof(*b) = %d\n", sizeof(*b));
	printf("sizeof(*c) = %d\n", sizeof(*c));
	printf("sizeof(*d) = %d\n", sizeof(*d));
}
