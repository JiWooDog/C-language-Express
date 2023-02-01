#include <stdio.h>

int main(void)
{
	FILE* fp = NULL;
	fp = fopen_s(&fp, "sample.txt", "w");

	if (fp == NULL)
		printf("파일 열기 실패 \n");
	else
		printf("파일 열기 성공 \n");
	fclose(fp);

	return 0;
}