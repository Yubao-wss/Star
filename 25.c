#include <stdio.h>
#include <stdlib.h>
int DigitSum(unsigned int n)
{
	if (n < 10)
	{
		return n;
	}
	else
	{
		return(n % 10) + DigitSum(n / 10);
	}
}
int main()
{
	int n;
	int key;
	scanf("%d", &n);
	key = DigitSum(n);
	printf("%d", key);
	system("pause");
	return 0;
}
