#include <stdio.h>

int main(void)
{
	int x, y, z, sum;

	sum = 0;
	printf("3���� ������ �Է��ϼ���.\n");
	printf("ù��° ���� : ");
	scanf_s("%d", &x);
	sum = sum + x;

	printf("�ι�° ���� : ");
	scanf_s("%d", &y);
	sum = sum + y;

	printf("����° ���� : ");
	scanf_s("%d", &z);
	sum = sum + z;

	printf("3�� ������ ���� %d\n", sum);

	return 0;
}