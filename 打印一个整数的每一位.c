#include <stdio.h>
#include <stdlib.h>
void print(int x)
{
	if (x > 9)
	{
		print(x / 10);
	}
	printf("%d ", x % 10);
}
int main()
{
	int a = 0;
	printf("请输入想要打印的数\n");
	scanf("%d", &a);
	print(a);
	system("pause");
	return 0;
}
