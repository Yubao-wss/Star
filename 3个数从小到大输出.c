#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, c, t;
	printf("请输入3个数\n");
	scanf("%d%d%d",&a,&b,&c);
	if (a > b)
	{
		t = a;
		a = b;
		b = t;
	}
	if (a > c)
	{
		t = a;
		a = c;
		c = t;
	}
	if (b > c)
	{
		t = b;
		b = c;
		c = t;
	}
	printf("从小到大排序后\n");
	printf("%d %d %d ",a, b, c);
	system("pause");
	return 0;
}
