#include <stdio.h>

int main(void)
{
	float x = 1.23456789012346789;
	double y = 1.2346789012346789;

	printf("float�� ũ�� = %d\n", sizeof(float));
	printf("double�� ũ�� = %d\n", sizeof(double));

	printf("x = %30.25f\n", x);
	printf("y = %30.25f\n", y);

	return 0;
}