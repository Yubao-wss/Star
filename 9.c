#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define n 2
int main()
{
	int a = n;
	int sum = 0;
	int i = 0;
	int j = 0;
	for (i = 0; i < 5; i++)
	{
		j += a*pow(10 ,i);
	    sum += j;
	}
	printf("%d", sum);
	system("pause");
	return 0;
}
