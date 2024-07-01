#include <stdio.h>

int main()
{
	int input=0, k=0;
	printf("값을 입력하세요. ");
	scanf_s("%d", &input);
	for (int i = 1; i < input; i++)
	{
		for (int j = i; j < input; j++)
			printf(" ");
		while (k != 2 * i - 1)
		{
			if (k == 0 || k == 2 * i - 2)//양 끝에 별(삼각형 모양)
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
		printf("*");//맨 밑줄
	}
		


}