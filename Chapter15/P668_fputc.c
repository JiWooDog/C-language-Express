#include <stdio.h>

int main(void)
{
	FILE* fp = NULL;
	fp = fopen_s(&fp, "sample.txt", "w");

	if (fp == NULL)
		printf("���� ���� ���� \n");
	else
		printf("���� ���� ���� \n");

	fputc('a', fp);
	fputc('b', fp);
	fputc('c', fp);
	fclose(fp);
	
	return 0;
}