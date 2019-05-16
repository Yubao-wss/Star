#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 0;
	int j = 0;
	int n = 0;
	printf("请输入想要打印的乘法口诀表的行列数\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		{
			for (j = 1; j <= i; j++)
			printf("%2d *%2d=%3d  ", i, j, i*j);
			printf("\n");
		}
	}
	system("pause");
	return 0;
}
