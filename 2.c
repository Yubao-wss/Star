#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10] = { 2, 3, 5, 7, 8, 9, 2, 6, 4, 5, };
	int i,j,t;
	for (i = 0; i < 9 ; i++)
	{
		for (j = 0; j < 9 - i; j++)
		{
			if (a[j]>a[j + 1])
			{
				t = a[j + 1];
				a[j + 1] = a[j];
				a[j] = t;
			}
		}
	}
	printf("max=%d", a[9]);
		system("pause");
		return 0;
}
