#include <stdio.h>
#include <stdlib.h>
void left_move(char *arr, int len, int steps)
{
	char temp;
	int i = 0;
	steps = steps%len;
	while (steps-- > 0)
	{
		temp = arr[0];
		for (i = 1; i < len; i++)
		{
			arr[i-1] = arr[i];
		}
		arr[i - 1] = temp;
	}
}
int main()
{
	int i = 0;
	char arr[] = "abcdef";
	int len = strlen(arr);
	left_move(arr, len, 1);
	for (; i < len; i++)
	{
		printf("%c", arr[i]);
	}
	system("pause");
	return 0;
}
