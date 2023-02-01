#include <stdio.h>

int main(void)
{
	int x, y;

	printf("두개의 정수를 입력하세요.\n");
	printf("첫번째 정수 : ");
	scanf_s("%d", &x);

	printf("두번째 정수 : ");
	scanf_s("%d", &y);

	printf("x == y의 결과값 : %d\n", x == y);
	printf("x != y의 결과값 : %d\n", x != y);
	printf("x > y의 결과값 : %d\n", x > y);
	printf("x < y의 결과값 : %d\n", x < y);
	printf("x >= y의 결과값 : %d\n", x >= y);
	printf("x <= y의 결과값 : %d\n", x <= y);

	return 0;
}