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

	//������ ������ ũ��� 4 �Ǵ� 8 ����Ʈ(�ü���� ���� �޶���, 64bit�� 8byte)
	printf("sizeof(a) = %d\n", sizeof(a));
	printf("sizeof(b) = %d\n", sizeof(b));
	printf("sizeof(c) = %d\n", sizeof(c));
	printf("sizeof(d) = %d\n", sizeof(d));
	printf("\n");

	//�����Ͱ� ����Ű�� �� �翬�� ����Ű�� ���� ������ Ÿ�Կ� ���� �޶��� 
	printf("sizeof(*a) = %d\n", sizeof(*a));
	printf("sizeof(*b) = %d\n", sizeof(*b));
	printf("sizeof(*c) = %d\n", sizeof(*c));
	printf("sizeof(*d) = %d\n", sizeof(*d));
}
