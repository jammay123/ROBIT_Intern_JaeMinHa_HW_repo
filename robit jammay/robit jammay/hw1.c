#include <stdio.h>

int main(void)
{
	double num1, num2, num3, num4, num5;
	double avr, max, min;

	printf("1��° �Ǽ��� �Է��Ͻÿ�.");
	scanf_s("%lf", &num1);
	printf("2��° �Ǽ��� �Է��Ͻÿ�.");
	scanf_s("%lf", &num2);
	printf("3��° �Ǽ��� �Է��Ͻÿ�.");
	scanf_s("%lf", &num3);
	printf("4��° �Ǽ��� �Է��Ͻÿ�.");
	scanf_s("%lf", &num4);
	printf("5��° �Ǽ��� �Է��Ͻÿ�.");
	scanf_s("%lf", &num5);

	printf("----���----\n");
	avr = (num1 + num2 + num3 + num4 + num5) / 5;
	printf("����� %lf�Դϴ�.\n", avr);

	if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5)
		printf("�ִ��� %lf�Դϴ�.\n", num1);

	else if (num2 > num3 && num2 > num4 && num2 > num5)
		printf("�ִ��� %lf�Դϴ�.\n", num2);

	else if (num3 > num4 && num3 > num5)
		printf("�ִ��� %lf�Դϴ�.\n", num3);

	else if (num4 > num5)
		printf("�ִ��� %lf�Դϴ�.\n", num4);

	else
		printf("�ִ��� %lf�Դϴ�.\n", num5);

	if (num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5)
		printf("�ּڰ��� %lf�Դϴ�.\n", num1);

	else if (num2 < num3 && num2 < num4 && num2 < num5)
		printf("�ּڰ��� %lf�Դϴ�.\n", num2);

	else if (num3 < num4 && num3 < num5)
		printf("�ּڰ��� %lf�Դϴ�.\n", num3);

	else if (num4 < num5)
		printf("�ּڰ��� %lf�Դϴ�.\n", num4);

	else
		printf("�ּڰ��� %lf�Դϴ�.\n", num5);

	
	return 0;

}