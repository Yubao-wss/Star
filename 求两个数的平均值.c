#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a = 4;
	int b = 8;
	int ret = b+((a - b) >> 1);
	printf("%d", ret);
	system("pause");
	return 0;
}


#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a = 4;
	int b = 8;
	int ret = (b & a)+((a ^ b) >> 1);
	printf("%d", ret);
	system("pause");
	return 0;
}
