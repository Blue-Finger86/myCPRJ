#include <stdio.h>
#include <malloc.h>

void main() 
{
	struct twice {
		char name[8];
		int age;
	};

	int n;
	printf("입력할 학생 수 : ");
	scanf("%d", &n);
	
	struct twice o[n];
	struct twice *p;

	p = o;

	p = (struct twice*)malloc(sizeof(struct twice)*n);

	for(int i = 0; i < n; i++) {
		printf("이름과 나이 입력 : ");
		scanf("%s", &o[i].name);
		scanf("%d", &o[i].age);
	}

	printf("\n-- 학생 명단 --\n");

	for(int i = 0; i < n; i++) {
		printf("이름 : %s , 나이 : %d\n", &o[i].name, o[i].age);
	}

	free(p);
}


