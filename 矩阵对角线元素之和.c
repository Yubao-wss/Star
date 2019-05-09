#include <stdio.h>
#include <stdlib.h>
#define N 3
int main()
{
	int a[N][N];
	int i = 0;
	int j = 0;
	int sum = 0;
	printf("请依次从左到右从上到下输入N*N矩阵的元素\n");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
			scanf("%d",&a[i][j]);
	}
	for (i = 0; i < N; i++)
	{
		sum += a[i][i];
	}
	printf("矩阵对角线合为: %d", sum);
	system("pause");
	return 0;
}
