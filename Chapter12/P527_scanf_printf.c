#include <stdio.h>

int main(void)
{
	char name[100];
	char address[100];

	printf("�̸��� �Է��ϼ��� : ");
	scanf_s("%s", name,sizeof(name));

	printf("���� �����ϴ� �ּҸ� �Է��ϼ��� : ");
	scanf_s("%s", address,sizeof(address));

	printf("�̸� : %s \n", name);
	printf("�ּ� : %s \n", address);

	return 0;
}