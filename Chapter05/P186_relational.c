#include <stdio.h>

int main(void)
{
	int x, y;

	printf("�ΰ��� ������ �Է��ϼ���.\n");
	printf("ù��° ���� : ");
	scanf_s("%d", &x);

	printf("�ι�° ���� : ");
	scanf_s("%d", &y);

	printf("x == y�� ����� : %d\n", x == y);
	printf("x != y�� ����� : %d\n", x != y);
	printf("x > y�� ����� : %d\n", x > y);
	printf("x < y�� ����� : %d\n", x < y);
	printf("x >= y�� ����� : %d\n", x >= y);
	printf("x <= y�� ����� : %d\n", x <= y);

	return 0;
}