#include <stdio.h>
#include <stdlib.h>
void init(int arr[],int n)
{
	int i;
	int num = 0;
	printf("请输入数组元素\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &num);
		arr[i] = num;
	}
}
void empty(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		arr[i] = 0;
	}
}
void reverse(int arr[], int n)
{
	int i, tmp;
	for (i = 0; i < n / 2; i++)
	{
		tmp = arr[i];
		arr[i] = arr[n - 1 - i];
		arr[n - 1 - i] = tmp;
	}
}
int main()
{
	int i = 0;
	int a[5] = {0};
	int n = sizeof(a) / sizeof(a[0]);
	init(a, n);
	printf("初始化后的数组：\n");
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	reverse(a, n);
	printf("逆置后的数组：\n");
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	empty(a, n);
	printf("清空后的数组：\n");
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}
