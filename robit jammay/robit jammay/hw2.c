#include <stdio.h>

int main(void)
{
	int num1 = 0, num2 = 1;
	int input, sum;
	printf("n 입력 : ");
	scanf_s("%d", &input);
	sum = num1 + num2;
	if (input == 1)
		printf("n번째 피보나치 값 : 0");

	else if (input == 2)
		printf("n번째 피보나치 값 : 1");

	else 
	{
		while (input != 3)
		{
			input--;
			num1 = num2;
			num2 = sum;
			sum = num1 + num2;//초기화

		}
		printf("n번째 피보나치 값 : %d", sum);
	}
	
		
	return 0;
}
