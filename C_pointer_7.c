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

	printf("앞으로 10개의 정수를 입력할 겁니다.\n");

	for (int i = 0; i < 10; i++)
	{
		printf("1개의 정수를 입력하시오. : ");
		scanf_s("%d", &num[i]);
	}

	s = sum(num);

	printf("10개 정수의 합은 %d입니다.\n", s);

	return 0;
}
