#include <stdio.h>

int main(void)
{
	long fact = 1;
	int n;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
		fact = fact * i;

	printf("%d!�� %d�Դϴ�.\n", n, fact);

	return 0;
}