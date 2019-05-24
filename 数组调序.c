#include <stdio.h>
#include <stdlib.h>
void change(int *arr,int len)
{
	int i = 0;
	int j = 0;
	int temp = 0;
	for (; i < len; i++)
	{
		if (arr[i] % 2 != 0)
		{
			temp = arr[j];
		    arr[j] = arr[i];
			arr[i] = temp;
		    j++;
		}			
	}
}
int main()
{
	int i = 0;
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int len = sizeof(arr) / sizeof(arr[0]);
	change(arr,len);
	for (; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}
