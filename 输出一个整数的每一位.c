#include <stdio.h>
#include <stdlib.h>
int main()
{
	int  a = 0;
	int arr[32] = { 0 };
	int i = 0;
	printf("请输入想要打印的数\n");
	scanf("%d", &a);
	if (a < 0)
		a = -a;
	while (a)
	{
		arr[i] = a % 10;
		a = a / 10;
		if (a!=0)
		{
			i++;
		}
	}
	for (; i >= 0; i--)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}
