#include <stdio.h>

int max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main(void)
{
	int x, y;
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &x);

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &y);

	int larger;
	larger = max(x, y);
	printf("�� ū���� %d�Դϴ�. \n", larger);

	return 0;
}