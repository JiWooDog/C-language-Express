#include <stdio.h>

int main(void)
{
	int x, y;

	printf("두개의 정수를 입력하세요.\n");
	printf("첫번째 정수 : ");
	scanf_s("%d", &x);

	printf("두번째 정수 : ");
	scanf_s("%d", &y);

	printf("%d && %d의 결과값 : %d\n", x, y, x && y);
	printf("%d || %d의 결과값 : %d\n", x, y, x || y);
	printf("!%d의 결과값 : %d\n", x, !x);

	return 0;
}