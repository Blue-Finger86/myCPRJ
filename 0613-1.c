#include <stdio.h>

void main() 
{
	int i = 100;
	int *ptr = &i;   //i�� �ּ� 
	int i2 = *ptr;   //i2�� i�� �������� ���� ���� 

	*ptr = 200;      //�������� i�� ���� �ٲ�

	printf("i = %d\n", i);     //200
	printf("i2 = %d\n", i2);   //100
	printf("*ptr = %d\n", *ptr); //200
	printf("&i = %p\n", &i);    //�ּ�
	printf("ptr = %p\n", ptr);  //�ּ�
} 
