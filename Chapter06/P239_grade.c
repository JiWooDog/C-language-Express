#include <stdio.h>

int main(void)
{
	int score;

	printf("성적을 입력하세요 : ");
	scanf_s("%d", &score);

	if (score >= 90)
		printf("A 학점\n");
	else if (score >= 80)
		printf("B 학점\n");
	else if (score >= 70)
		printf("C 학점\n");
	else if (score >= 60)
		printf("D 학점\n");
	else
		printf("F 학점\n");

	return 0;
}