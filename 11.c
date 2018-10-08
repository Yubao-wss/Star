#include <stdio.h>
#include <stdlib.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int key = 0;
	printf("请输入想要查找的数");
	scanf("%d", &key);
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int mid = left + (right - left) / 2;
	while (left <= right)
	{
		if (key > arr[mid])
			left = mid+1;
		else if (key < arr[mid])
			right = mid - 1;
		else
			break;
		mid = left + (right - left) / 2;
	}
	if (left>right)
		printf("找不到此数\n");
	else
	printf("你要找的数是第%d个数", mid + 1);
	system("pause");
	return 0;
}
