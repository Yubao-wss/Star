#include <stdio.h>
#include <stdlib.h>
int power(int n,int k)
{
	int sum=0;
	if (k == 0)
	{
		sum = 1;
	}
	else
	{
		sum = n*power(n, k - 1);
	}
	return sum;
}
int main()
{
	int n, k;
	int sum = 0;
	printf("请输入被开方数及开方次数\n");
	scanf("%d %d", &n, &k);
    sum=power(n, k);
	printf("\n得到的值为：%d", sum);
	system("pause");
	return 0;
}
