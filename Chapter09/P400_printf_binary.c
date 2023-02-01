#include <stdio.h>
void printf_binary(int x);

int main(void)
{
	printf_binary(9);
	printf("\n");

	return 0;
}

void printf_binary(int x)
{
	if (x > 0)
	{
		printf_binary(x / 2);
		printf("%d", x % 2);
	}
}