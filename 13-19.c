#include <stdio.h>
#include <malloc.h>

void main() {
	struct twice {
		int age;
		char name[10];
	};


	int std;
	printf("입력할 학생 수 입력 : ");
	scanf("%d", &std);


	struct twice o[std];
	struct twice *c;

	c = o;

	c = (struct twice*)malloc(sizeof(struct twice) * std);

	for(int i = 0; i < std; i++) {
		printf("이름과 나이 입력 : ");
		scanf("%s", &o[i].name); 
		scanf("%d", &o[i].age);
	}

	printf("\n--학생 명단--\n");

	for(int i = 0; i < std; i++) {
		printf("이름: %s, 나이: %d \n", o[i].name, o[i].age);
	}

	free(c);
}
