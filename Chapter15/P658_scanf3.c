#include <stdio.h>

int main(void)
{
	char c;
	char s[80], t[80];

	printf("스페이스로 분리된 문자열을 입력하세요 : ");
	scanf_s("%s%c%s", s, sizeof(s), &c, sizeof(c), t, sizeof(t));

	printf("입력된 첫번째 문자열 = %s \n", s);
	printf("입력된 문자 = %c \n", c);
	printf("입력된 두번째 문자열 = %s \n", t);

	return 0;
}