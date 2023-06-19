#include <stdio.h>

void tea_machine(int choice) {
	printf("주문 받았습니다. 잠시만 기다려주세요.\n");
	printf("컵과 차를 꺼내온다.\n");

	switch(choice) {
		case 1:
			printf("녹차를 따른다.\n");
			break;
		case 2:
			printf("캐모마일차를 따른다.\n");
			break;
		case 3:
			printf("보이차를 따른다.\n");
			break;
		default:
			printf("다시 한 번 말씀해주시겠어요?\n");
	}
}

void main() {
	int select;

	printf("주문하시겠습니까? <1>녹차, <2>캐모마일차, <3>보이차 :");
	scanf("%d", &select);

	tea_machine(select);

	printf("손님 주문하신 음료 나왔습니다.\n");
}

	
