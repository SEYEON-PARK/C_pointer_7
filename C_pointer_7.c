#include <stdio.h>

int sum(int* a)
{
	int s = 0;

	for (int b = 0; b < 10; b++)
	{
		s += a[b];
	}

	return s;
}

int main(void)
{
	int num[10], s;

	printf("������ 10���� ������ �Է��� �̴ϴ�.\n");

	for (int i = 0; i < 10; i++)
	{
		printf("1���� ������ �Է��Ͻÿ�. : ");
		scanf_s("%d", &num[i]);
	}

	s = sum(num);

	printf("10�� ������ ���� %d�Դϴ�.\n", s);

	return 0;
}