#include <stdio.h>
#define SIZE 3

struct student
{
	int number;
	char name[20];
	double grade;
};

int main(void)
{
	struct student list[SIZE];
	int i;

	for (i = 0; i < SIZE; i++)
	{
		printf("�й��� �Է��ϼ��� : ");
		scanf_s("%d", &list[i].number);

		printf("�̸��� �Է��ϼ��� : ");
		scanf_s("%s", list[i].name, 20);

		printf("������ �Է��ϼ���(�Ǽ�) : ");
		scanf_s("%lf", &list[i].grade);
	}

	for (i = 0; i < SIZE; i++)
		printf("�̸� : %s, ���� : %f \n", list[i].name, list[i].grade);

	return 0;
}