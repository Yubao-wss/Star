#include <stdio.h>
#include <stdlib.h>
int Swap(int *px, int *py)
{
	int tmp = 0;
	tmp = *px;
	*px = *py;
	*py = tmp;
}
int main()
{
	int num1 = 1;
	int num2 = 2;
	Swap(&num1, &num2);
	printf("num1=%d num2=%d", num1, num2);
	system("pause");
	return 0;
}
