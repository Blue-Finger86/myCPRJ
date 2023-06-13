#include <stdio.h>

void main() 
{
	int i = 100;
	int *ptr = &i;   //i의 주소 
	int i2 = *ptr;   //i2는 i를 역참조한 값을 가짐 

	*ptr = 200;      //역참조로 i의 값을 바꿈

	printf("i = %d\n", i);     //200
	printf("i2 = %d\n", i2);   //100
	printf("*ptr = %d\n", *ptr); //200
	printf("&i = %p\n", &i);    //주소
	printf("ptr = %p\n", ptr);  //주소
} 
