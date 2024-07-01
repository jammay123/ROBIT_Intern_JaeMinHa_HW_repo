#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	double num1, num2, result = 1;
	char operator;

	printf("Input Arithmetic Operation\n");
	printf("ex)\t3.4 * 8.5\n");
	printf("   \t2.9 - 5.4\n");
	printf("   \t3.9 * 8.0\n");
	printf("   \t3.9 ^ 8\n");

	printf("input : ");
	scanf("%lf %c %lf", &num1, &operator, &num2);

	switch (operator) {
	case '+':
		printf("%.2lf + %.2lf = %.2lf\n",num1, num2, num1 + num2);
		break;
	case '-':
		printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
		break;
	case '/':
		printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
		break;
	case '*':
		printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
		break;
	case '^':

        for (int i = 0; i < num2; i++)
			result = result * num1;
		printf("%.2lf ^ %.2lf = %.2lf\n", num1, num2, result);
		break;
	}

	return 0;
}



