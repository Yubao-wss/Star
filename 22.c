#include <stdio.h>
#include <stdlib.h>
int prime_num(int n)
{
	int i;
	for (i = 2; i < n; i++)
	{
		if (n%i == 00)
			return 0;
	}
	return 1;
}
int main()
{
	int a;
	int i;
	int count=0;
	for (i = 1; i < 100; i++)
	{
		a = prime_num(i);
		if (a == 1)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n素数的数量：%d", count);
	system("pause");
	return 0;
}
