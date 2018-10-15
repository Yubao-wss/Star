#include <stdio.h>
#include <stdlib.h>
int leap_year(int n)
{
	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
	{
		return 1;
	}
	return 0;
}
int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2018; year++)
	{
		int key = 0;
		key = leap_year(year);
		if (key == 1)
		{
			printf("%d ", year);
			count++;
		}
	}
	printf("\n闰年的数量为%d", count);
	system("pause");
	return 0;
}
