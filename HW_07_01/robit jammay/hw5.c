#include <stdio.h>

int main()
{
	int input = 0;
	printf("���� �Է��ϼ���.");
	scanf_s("%d", &input);
	for (int i = 0; i < input; i++)
	{
		for (int j = 0; j <= i; j++)
			printf("*");
		for (int k = 1; k < input - i;k++)
			printf(" ");
		for (int l = 1; l < input - i; l++)
			printf(" ");
		for (int n = 0; n <=i; n++)
			printf("*");
		printf("\n");
	}
	
	for (int i = 1; i < input; i++)//�غκ�
	{
		for (int j = 0; j < input - i; j++)
			printf("*");
		for (int k = 1; k <= i;k++)
			printf(" ");
		for (int l = 1; l <= i; l++)
			printf(" ");
		for (int n = 0; n <input - i; n++)
			printf("*");
		printf("\n");
	}
	
	return 0;
}