#include <stdio.h>

int main(void)
{
	char s[80];

	printf("문자열을 입력하세요 : ");
	scanf_s("%[abc]", s, sizeof(s));
	printf("입력된 문자열 = %s \n", s);

	return 0;
}