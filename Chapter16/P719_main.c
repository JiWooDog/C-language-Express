#include <stdio.h>
#include "P719_power.h"

int main(void)
{
	int x, y;

	printf("x�� ���� �Է��ϼ��� : ");
	scanf_s("%d", &x);

	printf("y�� ���� �Է��ϼ��� : ");
	scanf_s("%d", &y);

	printf("%d�� %d �������� %f \n", x, y, power(x, y));

	return 0;
}