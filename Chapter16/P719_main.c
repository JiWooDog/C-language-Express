#include <stdio.h>
#include "P719_power.h"

int main(void)
{
	int x, y;

	printf("x의 값을 입력하세요 : ");
	scanf_s("%d", &x);

	printf("y의 값을 입력하세요 : ");
	scanf_s("%d", &y);

	printf("%d의 %d 제곱값은 %f \n", x, y, power(x, y));

	return 0;
}