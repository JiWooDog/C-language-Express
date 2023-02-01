#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE* fp;
	char fname[100];
	int number, count = 0;
	char name[20];
	float score, total = 0.0;

	printf("���� ���� �̸��� �Է��ϼ��� : ");
	scanf_s("%s", fname, sizeof(fname));

	if (fp = fopen_s(&fp, fname, "w") == NULL)
	{
		fprintf(stderr, "���� ���� %s�� �� �� �����ϴ�. \n", fname);
		exit(1);
	}

	while (1)
	{
		printf("�й�, �̸�, ������ �Է��ϼ��� : (�����̸� ����)");
		scanf_s("%d", &number);

		if (number < 0)
			break;
		scanf_s("%s %f", name, sizeof(name), &score);
		fprintf(fp, "%d, %s, %f", number, name, sizeof(name), score);
	}
	fclose(fp);

	if ((fp = fopen_s(&fp, fname, "r")) == NULL)
	{
		fprintf(stderr, "���� ���� %s�� �� �� �����ϴ�. \n", fname);
		exit(1);
	}

	while (!feof(fp))
	{
		fscanf_s(fp, "%d %s %f", &number, name, sizeof(name), &score);
		total += score;
		count++;
	}

	printf("��� = %f \n", total / count);
	fclose(fp);

	return 0;
}