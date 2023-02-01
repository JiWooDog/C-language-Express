#include <stdio.h>

int main(void)
{
	int x, y, result;

	printf("두개의 정수를 입력하세요.\n");
	printf("첫번째 정수 : ");
	scanf_s("%d", &x);

	printf("두번째 정수 : ");
	scanf_s("%d", &y);

	result = x + y;
	printf("%d + %d = %d\n", x, y, result);

	result = x - y;
	printf("%d - %d = %d\n", x, y, result);

	result = x * y;
	printf("%d * %d = %d\n", x, y, result);

	result = x / y;
	printf("%d / %d = %d\n", x, y, result);

	result = x % y;
	printf("%d %% %d = %d\n", x, y, result);

	return 0;
}