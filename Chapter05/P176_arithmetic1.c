#include <stdio.h>

int main(void)
{
	double x, y, result;

	printf("�ΰ��� ������ �Է��ϼ���.\n");
	printf("ù��° ���� : ");
	scanf_s("%lf", &x);

	printf("�ι�° ���� : ");
	scanf_s("%lf", &y);

	result = x + y;
	printf("%f + %f = %f\n", x, y, result);

	result = x - y;
	printf("%f - %f = %f\n", x, y, result);

	result = x * y;
	printf("%f * %f = %f\n", x, y, result);

	result = x / y;
	printf("%f / %f = %f\n", x, y, result);

	return 0;
}