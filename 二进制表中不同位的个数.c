#include <stdio.h>
#include <stdlib.h>
int fun(int num)
{
	int count = 0;
	int i = 32;
	while (i--)
	{
		if (num & 1 == 1)
			count++;
		num = num >> 1;
	}
	return count;
}
int main()
{
	int a, b;
	scanf("%d%d",&a,&b);
	int c = a^b;
	int ret = fun(c);
	printf("%d", ret);
	system("pause");
	return 0;
}
