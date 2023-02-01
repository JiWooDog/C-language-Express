#include <stdio.h>

int main(void)
{
	FILE* fp = NULL;
	int c;

	fp = fopen_s(&fp, "sample.txt", "r");
	if (fp == NULL)
		printf("파일 열기 실패 \n");
	else
		printf("파일 열기 성공 \n");

	while ((c = fgetc(fp)) != EOF)
	{
		putchar(c);
	}
	fclose(fp);

	printf("\n");

	return 0;
}