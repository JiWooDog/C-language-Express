#include <stdio.h>

int main(void)
{
	int x, y, z;

	if (scanf_s("%d%d%d", &x, &y, &z) == 3)
		printf("정수들의 합은 %d \n", x + y + z);
	else
		printf("입력값이 올바르지 않습니다. \n");

	return 0;
}