#include <stdio.h>
#include <stdlib.h>
#define X 2
#define Y 2
#define Z 2
int main()
{
	int i=0, j=0, k=0;
	int a[X][Y], b[Y][Z], c[X][Z];
	printf("请输入a矩阵内的元素\n");
	for (i = 0; i < X; i++)
	{
		for (j = 0; j < Y; j++)
			scanf("%d", &a[i][j]);
	}
	printf("请输入b矩阵内的元素\n");	
	for (i = 0; i < Y; i++)
    {
		for (j = 0; j < Z;j++)
			scanf("%d", &b[i][j]);
	}
	for (i = 0; i < X; i++)
	{
		for (j = 0; j < Z; j++)
			c[i][j] = 0;
	}
	for (i = 0; i < X; i++)
	{
		for (j = 0; j < Z; j++)
		{
			c[i][j] = 0;
			for (k = 0; k < Y; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	printf("a、b矩阵的乘积为：\n");
	for (i = 0; i < X; i++)
	{
		for (j = 0; j < Z; j++)
			printf("%3d", c[i][j]);
	}
	system("pause");
	return 0;
}
