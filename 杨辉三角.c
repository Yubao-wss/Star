#include <stdio.h>
#include <stdlib.h>
int main()
{
	int l = 0;
	int arr[20][20] = { 0 };
	int a, b;
	printf("输入行数：\n");
	scanf("%d", &l);
	for (a = 0; a < l; a++)
	{
		arr[a][0] = 1;
	}
	for (a = 1; a<l; a++)
	{
		for (b = 1; b <= a; b++)
			arr[a][b] = arr[a - 1][b - 1] + arr[a - 1][b];
	}
	for (a = 0; a < l; a++) 
	{
		for (b = 0; b < l - a - 1; b++)
		{
			printf("   ");
		}
		for (b = 0; b <= a; b++)
		{
			printf("%-5d ", arr[a][b]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
