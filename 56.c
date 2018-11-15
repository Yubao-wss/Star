#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

int my_strcmp(const char * str1,const char *str2)
{
	while (*str1 == *str2 && *str1 != '\0' && *str2 != '\0')
	{
		str1++;
		str2++;
	}
	if (*str1 == *str2)
		return 0;
	else if (*str1 > *str2)
		return 1;
	else
		return -1;
}
int main()
{
	char str1[] = "aaaa";
	char str2[] = "ab";
	int ret = my_strcmp(str1, str2);
	if (ret > 0)
	{
		printf("str1>str2");
	}
	else if (ret < 0)
	{
		printf("str1<str2");
	}
	else
	{
		printf("str1=str2");
	}
	system("pause");
	return 0;
}
