#include <stdio.h>

int main(void)
{
	int x, y, r;

	printf("�ΰ��� ������ �Է��ϼ���(ū��, ������)\n");
	printf("ù��° ���� : ");
	scanf_s("%d", &x);

	printf("�ι�° ���� : ");
	scanf_s("%d", &y);

	while (y != 0)
	{
		r = x % y;
		x = y;
		y = r;
	}

	printf("�ִ� ������� %d�Դϴ�.\n", x);

	return 0;
}