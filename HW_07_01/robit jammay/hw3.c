#include <stdio.h>

int main(void)
{
	int input;
	printf("년도를 입력하세요 : ");
	scanf_s("%d", &input);
	if ((input % 4 == 0)&&(input % 100 != 0))
		printf("윤년");
	else if ((input % 4 == 0) && (input % 400 == 0))
		printf("윤년");
	else
	
	return 0;
}
