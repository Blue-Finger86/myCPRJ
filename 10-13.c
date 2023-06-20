#include <stdio.h>

void cafe(int select) {
	printf("네 잠시만 기다려주세요!\n");

	switch(select) {
		case 1:
			printf("주문하신 아이스 아메리카노 나왔습니다~\n");
			break;
		case 2:
			printf("주문하신 따뜻한 아메리카노 나왔습니다~\n");
			break;
		case 3:
			printf("주문하신 아이스티 나왔습니다~\n");
			break;
	}
}




void main() {
	int select;

	for(int i = 0; i < 5; i++) {
		printf("주문하시겠습니까? <1>아이스 아메리카노, <2>따뜻한 아메리카노, <3>아이스티 : ");
		scanf("%d", &select);

		cafe(select);
		printf("\n");

		if ( select != 1 && select != 2 && select != 3) 
			break;

	}
}
