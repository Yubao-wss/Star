#include <stdio.h>
#include <stdlib.h>
int fun1(unsigned int num)
{
	int count = 0;
	while (num)
	{
		if (num % 2 == 1)
			count++;
		num = num / 2;
	}
	return count;
}
int fun2(int num)
{
	int count = 0;
	int i = 32;
	while (i--)
	{
		if (num & 1 == 1)
			count++;
		num = num >> 1;
	}
	return count;
}
int main()
{
	int num = 0;
	int ret = 0;
	scanf("%d", &num);
	ret = fun1(num); 
	printf("%d\n", ret);
	ret = fun2(num);
	printf("%d", ret);
	system("pause");
	return 0;
}
