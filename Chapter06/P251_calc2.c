#include <stdio.h>

int main(void)
{
	char op;
	int x, y, result;

	printf("������ �Է��ϼ���(�� : 2 + 5) \n");
	printf(">>");
	scanf_s("%d %c %d", &x, &op, 1, &y);

	switch (op)
	{
		case '+':
			result = x + y;
			break;
		case '-':
			result = x - y;
			break;
		case '*':
			result = x * y;
			break;
		case '/':
			result = x / y;
			break;
		case '%':
			result = x % y;
			break;
		default:
			printf("�������� �ʴ� �������Դϴ�.\n");
			break;
	}
	
	printf("%d %c %d = %d", x, op, y, result);

	return 0;
}