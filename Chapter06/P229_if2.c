#include <stdio.h>

int main(void)
{
	int number;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &number);

	if (number < 0)
		number = -number;

	printf("���밪�� %d�Դϴ�.\n", number);

	return 0;
}