#include <stdio.h>

void tea_machine(int choice) {
	printf("�ֹ� �޾ҽ��ϴ�. ��ø� ��ٷ��ּ���.\n");
	printf("�Ű� ���� �����´�.\n");

	switch(choice) {
		case 1:
			printf("������ ������.\n");
			break;
		case 2:
			printf("ĳ�������� ������.\n");
			break;
		case 3:
			printf("�������� ������.\n");
			break;
		default:
			printf("�ٽ� �� �� �������ֽðھ��?\n");
	}
}

void main() {
	int select;

	printf("�ֹ��Ͻðڽ��ϱ�? <1>����, <2>ĳ������, <3>������ :");
	scanf("%d", &select);

	tea_machine(select);

	printf("�մ� �ֹ��Ͻ� ���� ���Խ��ϴ�.\n");
}

	
