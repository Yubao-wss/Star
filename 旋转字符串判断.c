#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int if_move(char *arr1, char *arr2, int len)
{
	int steps = len;
	char temp;
	int i = 0;
	while (steps-- > 0)
	{
		temp = arr1[0];
		for (i = 1; i < len; i++)
		{
			arr1[i - 1] = arr1[i];
		}
		arr1[i - 1] = temp;
		if (strcmp(arr1,arr2)==0)
			return 1;
	}
	return 0;
}
int main()
{
	int i = 0;
	char arr1[] = "ABCDD";
	char arr2[] = "DABCD";
	int len = strlen(arr1);
	int ret = if_move(arr1, arr2, len);
	if (ret == 1)
		printf("arr2是由arr1旋转得来的");
	else
		printf("arr2不是由arr1旋转得来的");
	system("pause");
	return 0;
}
