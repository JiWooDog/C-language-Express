#include <stdio.h>

struct student
{
	int number;
	char name[10];
	double grade;
};

int main(void)
{
	struct student s;

	printf("�й��� �Է��ϼ��� : ");
	scanf_s("%d", &s.number);

	printf("�̸��� �Է��ϼ��� : ");
	scanf_s("%s", s.name, 10);

	printf("������ �Է��ϼ���(�Ǽ�) : ");
	scanf_s("%lf", &s.grade);

	printf("�й� : %d \n", s.number);
	printf("�̸� : %s \n", s.name);
	printf("���� : %f \n", s.grade);

	return 0;
}