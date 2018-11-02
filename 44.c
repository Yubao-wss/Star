#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 3
int Find(int arr[ROW][COL], int num)
{
	int i = 0;
	int j = COL - 1;
	while (i < ROW  && j >= 0)
	{
		if (arr[i][j] == num)
			return 1;
		else if (arr[i][j] > num)
			j--;
		else if (arr[i][j] < num)
			i++;
	}
	return 0;
}
int main()
{
	int arr[ROW][COL] = 
	{ 
		1, 3, 4, 
		2, 4, 5, 
		4, 5, 6 
	};
	int a;
	scanf("%d", &a);
	int ret = Find(arr, a);
	if (ret == 1)
		printf("该数存在");
	else
		printf("该数不存在");
	system("pause");
	return 0;
}
