#include <stdio.h>

void cafe(int select) {
	printf("�� ��ø� ��ٷ��ּ���!\n");

	switch(select) {
		case 1:
			printf("�ֹ��Ͻ� ���̽� �Ƹ޸�ī�� ���Խ��ϴ�~\n");
			break;
		case 2:
			printf("�ֹ��Ͻ� ������ �Ƹ޸�ī�� ���Խ��ϴ�~\n");
			break;
		case 3:
			printf("�ֹ��Ͻ� ���̽�Ƽ ���Խ��ϴ�~\n");
			break;
	}
}




void main() {
	int select;

	for(int i = 0; i < 5; i++) {
		printf("�ֹ��Ͻðڽ��ϱ�? <1>���̽� �Ƹ޸�ī��, <2>������ �Ƹ޸�ī��, <3>���̽�Ƽ : ");
		scanf("%d", &select);

		cafe(select);
		printf("\n");

		if ( select != 1 && select != 2 && select != 3) 
			break;

	}
}
