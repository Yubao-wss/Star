#include <stdio.h>
#include <stdlib.h>
int main()
{
	int arr[] = { 1, 1, 2, 2, 3, 3, 4, 5 };
	int i = 0;
	int j = 0;
	int x = 0;
	int y = 0;
	int size = sizeof(arr) / sizeof(arr[0]);  
	int num = 0;
	for (; i < size; i++)
	{
		num ^= arr[i];
	}
	for (i = 0; i < 32; i++)
	{
		if ((num >> i) & 1 == 1)
		{
			break;
		}
	}
	for (; j < size; j++)
	{
		if ((arr[j] >> i) & 1 == 1)
		{
			x ^= arr[j];
		}
		else
		{
			y ^= arr[j];
		}
	}
	printf("%d %d\n", x, y);
	system("pause");
	return 0;
}
