#include <stdio.h>

int main(void)
{
	double x, y, result;

	printf("두개의 정수를 입력하세요.\n");
	printf("첫번째 정수 : ");
	scanf_s("%lf", &x);

	printf("두번째 정수 : ");
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