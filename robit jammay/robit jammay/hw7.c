#include <stdio.h>

int main()
{
	int n, r;
	printf("n, r 입력 : ");
	scanf_s("%d, %d", &n, &r);


	int sum1 = 1;

	for (int i = n; i >= 1; i--)//n!
	{
		sum1 *= i;
	}
	int sum2 = 1;
	for (int i = n - r; i >= 1; i--)//(n-r)!
	{
		sum2 *= i;
	}
	int sum3 = 1;
	for (int i = r; i >= 1; i--)// n의 r제곱
	{
		sum3 *= n;
	}
	int sum4 = 1;
	for (int i = r; i >= 1; i--)// r!
	{
		sum4 *= i;
	}
	int sum5 = 1;
	for (int i = n + r - 1; i >= 1; i--)//(n + r - 1)!
	{
		sum5 *= i;
	}
	int sum6 = 1;
	for (int i = n - 1; i >= 1; i--)//(n - 1)!
	{
		sum6 *= i;
	}
	printf("순열 : %d\n", sum1 / sum2);
	printf("중복순열 : %d\n", sum3);
	printf("조합 : %d\n", sum1 / sum2 / sum4);
	printf("중복조합 : %d\n", sum5 / sum6 / sum4);



	return 0;
}