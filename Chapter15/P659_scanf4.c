#include <stdio.h>

int main(void)
{
	char s[80];

	printf("���ڿ��� �Է��ϼ��� : ");
	scanf_s("%[abc]", s, sizeof(s));
	printf("�Էµ� ���ڿ� = %s \n", s);

	return 0;
}