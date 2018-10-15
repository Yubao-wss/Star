#include <stdio.h>
#include <stdlib.h>
void print_multiplying_unit(int n)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		{
			for (j = 1; j <= i; j++)
			printf("%2d *%2d=%3d  ", i, j, i*j);
			printf("\n");
		}
	}
	
}
int main()
{
	int n;
	printf("请输入要打印的乘法口诀表位数\n");
	scanf("%d", &n);
	print_multiplying_unit(n);
	system("pause");
	return 0;
}
