#include <stdio.h>

int main()
{
	int input=0, k=0;
	printf("���� �Է��ϼ���. ");
	scanf_s("%d", &input);
	for (int i = 1; i < input; i++)
	{
		for (int j = i; j < input; j++)
			printf(" ");
		while (k != 2 * i - 1)
		{
			if (k == 0 || k == 2 * i - 2)//�� ���� ��(�ﰢ�� ���)
				printf("*");
			else
				printf(" ");

			k++;
		}
		k = 0;
		printf("\n");
	}
	for (int m = 1; m <= 2 * input - 1; m++)
	{
		printf("*");//�� ����
	}
		


}