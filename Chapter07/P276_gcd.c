#include <stdio.h>

int main(void)
{
	int x, y, r;

	printf("두개의 정수를 입력하세요(큰수, 작은수)\n");
	printf("첫번째 정수 : ");
	scanf_s("%d", &x);

	printf("두번째 정수 : ");
	scanf_s("%d", &y);

	while (y != 0)
	{
		r = x % y;
		x = y;
		y = r;
	}

	printf("최대 공약수는 %d입니다.\n", x);

	return 0;
}