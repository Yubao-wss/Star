#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 0;
	int ret = 0;
	int a[] = { 5, 8, 8, 5, 6, 4, 7, 4, 7 };
	int sz = sizeof(a) / sizeof(a[0]);
	for (i = 0; i < sz; i++)
	{
		ret ^= a[i] ;
	}
	printf("%d", ret);
	system("pause");
	return 0;
}
