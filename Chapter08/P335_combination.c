#include <stdio.h>

long combination(int n, int r)
{
	return (factorial(n) / (factorial(r) * factorial(n - r)));
}

int get_integer(void)
{
	int n;

	printf("정수를 입력하세요 : ");
	scanf_s("%d", &n);

	return n;
}

long factorial(int n)
{
	int i;
	long result = 1;

	for (i = 1; i <= n; i++)
		result *= i;

	return result;
}

int main(void)
{
	int a, b;

	a = get_integer();
	b = get_integer();

	printf("C(%d, %d) = %d \n", a, b, combination(a, b));

	return 0;
}