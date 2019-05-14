#include <stdio.h>
#include <stdlib.h>
int factorial(int n)
{
	int result = 1;
	while (n > 1)
	{
		result *= n;
		n -= 1;
	}
	return result;
}
int factoria2(int n)
{
	int result = 1;
	if (n > 1)
	{
		result = factoria2(n - 1)*n;
	}
	return result;
}
int main()
{
	int n;
	int result;
	printf("请输入需要求阶乘的数\n");
	scanf("%d", &n);
	if (n < 0)
	{
		printf("输入错误，不能为负数");
		goto end;
	}
	result = factorial(n);
	printf("n的阶乘为%d\n", result);
	result = factoria2(n);
	printf("n的阶乘为%d", result);
end:
	system("pause");
	return 0;
}
