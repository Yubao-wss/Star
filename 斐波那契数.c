#include <stdio.h>
#include <stdlib.h>
int fib1(int n)
{
	if (n <= 2)
		return 1;
	else
		return fib1(n - 1) + fib1(n - 2);
}
int fib2(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	int i;
	if (n > 2)
	{
		for (i = 3; i <= n; i++)
		{
			c = a + b;
			a = b;
			b = c;
		}
	}
	return c;
}
int main()
{
	int n = 0;
	int key = 0;
	printf("你要求第几个斐波那契数：\n");
	scanf("%d", &n);
	key=fib1(n);
	printf("第%d个斐波那契数为：%d",n,key);
	printf("\n");
	key = fib2(n);
	printf("第%d个斐波那契数为：%d",n,key);
	printf("\n");
	system("pause");
	return 0;
}
