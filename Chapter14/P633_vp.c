#include <stdio.h>

void memzero(void* ptr, size_t len)
{
	char* p = ptr;
	for (; len > 0; len--)
		*p++ = 0;
}

int main(void)
{
	char a[10];
	memzero(a, sizeof(a));
	printf("char a[10] = %s \n", a);

	int b[10];
	memzero(b, sizeof(b));
	printf("int b[10] = %d \n", b);

	double c[10];
	memzero(c, sizeof(c));
	printf("double c[10] = %lf \n", c);

	return 0;
}