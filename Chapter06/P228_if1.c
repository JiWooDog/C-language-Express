#include <stdio.h>

int main(void)
{
	int number;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &number);

	if (number > 0)
		printf("����Դϴ�.\n");

	printf("�Էµ� ���� %d�Դϴ�.\n", number);

	return 0;
}