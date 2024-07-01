#include <stdio.h>

int main(void)
{
	double num1, num2, num3, num4, num5;
	double avr, max, min;

	printf("1번째 실수를 입력하시오.");
	scanf_s("%lf", &num1);
	printf("2번째 실수를 입력하시오.");
	scanf_s("%lf", &num2);
	printf("3번째 실수를 입력하시오.");
	scanf_s("%lf", &num3);
	printf("4번째 실수를 입력하시오.");
	scanf_s("%lf", &num4);
	printf("5번째 실수를 입력하시오.");
	scanf_s("%lf", &num5);

	printf("----결과----\n");
	avr = (num1 + num2 + num3 + num4 + num5) / 5;
	printf("평균은 %lf입니다.\n", avr);

	if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5)
		printf("최댓값은 %lf입니다.\n", num1);

	else if (num2 > num3 && num2 > num4 && num2 > num5)
		printf("최댓값은 %lf입니다.\n", num2);

	else if (num3 > num4 && num3 > num5)
		printf("최댓값은 %lf입니다.\n", num3);

	else if (num4 > num5)
		printf("최댓값은 %lf입니다.\n", num4);

	else
		printf("최댓값은 %lf입니다.\n", num5);

	if (num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5)
		printf("최솟값은 %lf입니다.\n", num1);

	else if (num2 < num3 && num2 < num4 && num2 < num5)
		printf("최솟값은 %lf입니다.\n", num2);

	else if (num3 < num4 && num3 < num5)
		printf("최솟값은 %lf입니다.\n", num3);

	else if (num4 < num5)
		printf("최솟값은 %lf입니다.\n", num4);

	else
		printf("최솟값은 %lf입니다.\n", num5);

	
	return 0;

}