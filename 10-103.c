#include <stdio.h>

void tea_cafe(int coin) {
	printf("�ֹ� �޾ҽ��ϴ�.\n");

	switch(coin)
	{
		case 1:
			printf("���� �غ��ص帮�ڽ��ϴ�~\n");
			break;
		case 2:
			printf("����� �غ��ص帮�ڽ��ϴ�~\n");
			break;
		case 3:
			printf("�ڽ����� �غ��ص帮�ڽ��ϴ�~\n");
			break;
		default:
			printf("�մ� �˼������� ����� �� ������ �����Ͻʴϴ�~\n");
	}

	printf("�ֹ��Ͻ� �� ���Խ��ϴ�~");
}

void main() {
	int t;

	printf("� ���� �غ��ص帱���? 1�� ����, 2�� ����� 3�� �ڽ����� �ֽ��ϴ�~\n");
	scanf("%d", &t);

	tea_cafe(t);
}

