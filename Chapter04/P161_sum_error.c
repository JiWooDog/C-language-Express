#include <stdio.h>

int main(void)
{
	int x, y, z, sum;

	sum = 0;
	printf("3개의 정수를 입력하세요.\n");
	printf("첫번째 정수 : ");
	scanf_s("%d", &x);
	sum = sum + x;

	printf("두번째 정수 : ");
	scanf_s("%d", &y);
	sum = sum + y;

	printf("세번째 정수 : ");
	scanf_s("%d", &z);
	sum = sum + z;

	printf("3개 정수의 합은 %d\n", sum);

	return 0;
}