#include <stdio.h>
#include <malloc.h>

void main() {
	struct twice {
		int age;
		char name[10];
	};


	int std;
	printf("�Է��� �л� �� �Է� : ");
	scanf("%d", &std);


	struct twice o[std];
	struct twice *c;

	c = o;

	c = (struct twice*)malloc(sizeof(struct twice) * std);

	for(int i = 0; i < std; i++) {
		printf("�̸��� ���� �Է� : ");
		scanf("%s", &o[i].name); 
		scanf("%d", &o[i].age);
	}

	printf("\n--�л� ���--\n");

	for(int i = 0; i < std; i++) {
		printf("�̸�: %s, ����: %d \n", o[i].name, o[i].age);
	}

	free(c);
}
