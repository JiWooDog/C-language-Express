#include <stdio.h>

int main(void)
{
	FILE* fp = NULL;
	int c;

	fp = fopen_s(&fp, "sample.txt", "r");
	if (fp == NULL)
		printf("���� ���� ���� \n");
	else
		printf("���� ���� ���� \n");

	while ((c = fgetc(fp)) != EOF)
	{
		putchar(c);
	}
	fclose(fp);

	printf("\n");

	return 0;
}