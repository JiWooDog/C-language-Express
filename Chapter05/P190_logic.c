#include <stdio.h>

int main(void)
{
	int x, y;

	printf("�ΰ��� ������ �Է��ϼ���.\n");
	printf("ù��° ���� : ");
	scanf_s("%d", &x);

	printf("�ι�° ���� : ");
	scanf_s("%d", &y);

	printf("%d && %d�� ����� : %d\n", x, y, x && y);
	printf("%d || %d�� ����� : %d\n", x, y, x || y);
	printf("!%d�� ����� : %d\n", x, !x);

	return 0;
}