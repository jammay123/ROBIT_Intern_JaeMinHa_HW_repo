#include <stdio.h>

int main(void)
{
	int num1 = 0, num2 = 1;
	int input, sum;
	printf("n �Է� : ");
	scanf_s("%d", &input);
	sum = num1 + num2;
	if (input == 1)
		printf("n��° �Ǻ���ġ �� : 0");

	else if (input == 2)
		printf("n��° �Ǻ���ġ �� : 1");

	else 
	{
		while (input != 3)
		{
			input--;
			num1 = num2;
			num2 = sum;
			sum = num1 + num2;//�ʱ�ȭ

		}
		printf("n��° �Ǻ���ġ �� : %d", sum);
	}
	
		
	return 0;
}
