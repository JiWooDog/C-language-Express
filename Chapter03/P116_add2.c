#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int sum;

	printf("ù��° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &x);

	printf("�ι�° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &y);

	sum = x + y;
	printf("�μ��� �� : %d\n", sum);

	return 0;
}