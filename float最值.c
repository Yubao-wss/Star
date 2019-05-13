#include <stdio.h>
#include <stdlib.h>
int main()
{
	float a = -8.25;
	char *p = (char*)&a;
	*p = 0xff;
	*(p + 1) = 0xff;
	*(p + 2) = 0x7f;
	*(p + 3) = 0x7f;
	printf("a=%f\n", a);
	system("pause");
	return 0;
}
//float最大值
#include <stdio.h>
#include <stdlib.h>
int main()
{
	float a = -8.25;
	char *p = (char*)&a;
	*p = 0x01;
	*(p + 1) = 0x00;
	*(p + 2) = 0x80;
	*(p + 3) = 0x00;
	printf("a=%f\n", a);
	system("pause");
	return 0;
}
//最小正数
