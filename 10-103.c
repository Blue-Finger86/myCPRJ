#include <stdio.h>

void tea_cafe(int coin) {
	printf("주문 받았습니다.\n");

	switch(coin)
	{
		case 1:
			printf("녹차 준비해드리겠습니다~\n");
			break;
		case 2:
			printf("우롱차 준비해드리겠습니다~\n");
			break;
		case 3:
			printf("자스민차 준비해드리겠습니다~\n");
			break;
		default:
			printf("손님 죄송하지만 저희는 차 종류만 가능하십니다~\n");
	}

	printf("주문하신 차 나왔습니다~");
}

void main() {
	int t;

	printf("어떤 차로 준비해드릴까요? 1번 녹차, 2번 우롱차 3번 자스민차 있습니다~\n");
	scanf("%d", &t);

	tea_cafe(t);
}

