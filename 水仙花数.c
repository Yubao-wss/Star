#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int i = 0;
	int a = 0;
	for (i = 100; i < 1000; i++)
	{
		a = pow(i / 100, 3.0) + pow(i % 100 / 10, 3.0) + pow(i % 10, 3.0);
		if(a == i)
			printf("%d ", i);
	}
	system("pause");
	return 0;
}
