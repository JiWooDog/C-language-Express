#include <stdio.h>

int main(void)
{
	int x, y, result;

	printf("�ΰ��� ������ �Է��ϼ���.\n");
	printf("ù��° ���� : ");
	scanf_s("%d", &x);

	printf("�ι�° ���� : ");
	scanf_s("%d", &y);

	result = x + y;
	printf("%d + %d = %d\n", x, y, result);

	result = x - y;
	printf("%d - %d = %d\n", x, y, result);

	result = x * y;
	printf("%d * %d = %d\n", x, y, result);

	result = x / y;
	printf("%d / %d = %d\n", x, y, result);

	result = x % y;
	printf("%d %% %d = %d\n", x, y, result);

	return 0;
}