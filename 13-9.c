#include <stdio.h>
#include <malloc.h>

void main() 
{
	struct twice {
		char name[8];
		int age;
	};

	int n;
	printf("�Է��� �л� �� : ");
	scanf("%d", &n);
	
	struct twice o[n];
	struct twice *p;

	p = o;

	p = (struct twice*)malloc(sizeof(struct twice)*n);

	for(int i = 0; i < n; i++) {
		printf("�̸��� ���� �Է� : ");
		scanf("%s", &o[i].name);
		scanf("%d", &o[i].age);
	}

	printf("\n-- �л� ��� --\n");

	for(int i = 0; i < n; i++) {
		printf("�̸� : %s , ���� : %d\n", &o[i].name, o[i].age);
	}

	free(p);
}


