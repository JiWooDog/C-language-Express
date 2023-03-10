#include <stdio.h>
#define SIZE 5

int main(void)
{
	int i;
	int buffer[SIZE];
	FILE* fp = NULL;

	fp = fopen_s(&fp, "binary.bin", "rb");
	if (fp == NULL)
	{
		fprintf(stderr, "binary.bin 파일을 열 수 없습니다. \n");
		return 1;
	}
	fread(buffer, sizeof(int), SIZE, fp);

	for (i = 0; i < SIZE; i++)
		printf("%d", buffer[i]);

	printf("\n");

	fclose(fp);

	return 0;
}