#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num = 0;
	printf("输入一个十进制数\n");
	scanf("%d", &num);
	int i = 0;
	int count = 0;
	int a[32] = { 0 };
	while (num)
	{
		a[i] = num % 2;
		num = num / 2;
		if (num != 0)
		{
			i++;
		}		
	}
	int p = i;
	printf("打印偶数位的二进制序列：\n");
	for (; i >= 0; i = i - 2)
	{
		printf("%d", a[i]);
	}
	printf("\n");
	printf("打印奇数位的二进制序列：\n");
	for (i=p-1; i >= 0; i = i - 2)
	{
		printf("%d", a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
