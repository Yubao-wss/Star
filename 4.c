 #include <stdio.h>
#include <stdlib.h>
int main()
{
	int arr1[] = { 0 }, arr2[] = { 0 };
	int i;
	int n;
	int tmp;
	printf("请定义数组的长度： \n");
	scanf("%d", &n);
	printf("请输入数组1的元素： \n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	printf("请输入数组2的元素： \n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr2[i]);
	}
	for (i = 0; i <= n; i++)
	{
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	printf("两数组交换内容后：\n");
	printf("数组1：");
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	printf("数组2：");
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr2[i]);
	}
	system("pause");
	return 0;
}
