#include <stdio.h>
#include <stdlib.h>
int my_strlen1(char *string)
{
	if (*string == '\0')
		return 0;
	else
		return 1 + my_strlen1(string + 1);
}
int my_strlen2(char *string)
{
	int n=0;
	while (*string)
	{
		string++;
		n++;
	}
	return n;
}
int main()
{
	int len;
	char a[] = "114514";
	len = my_strlen1(a);
	printf("所输入的字符串的长度为%d\n", len);
	len = my_strlen2(a);
	printf("所输入的字符串的长度为%d\n", len);
	system("pause");
	return 0;
}
