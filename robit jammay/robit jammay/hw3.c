#include <stdio.h>

int main(void)
{
	int input;
	printf("�⵵�� �Է��ϼ��� : ");
	scanf_s("%d", &input);
	if ((input % 4 == 0)&&(input % 100 != 0))
		printf("����");
	else if ((input % 4 == 0) && (input % 400 == 0))
		printf("����");
	else
	
	return 0;
}
