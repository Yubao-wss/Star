#include <stdio.h>
#include <stdlib.h>
int check_sys()
{
	int i = 1;
	return(*(char*)&i);
}
int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	system("pause");
	return 0;
}
