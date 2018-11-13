#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
void my_strcat(char * dest, const char * str)
{
	assert(str != NULL);
	assert(dest != NULL);
	int i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (*str != '\0')
	{
		dest[i] = *str;
		i++;
		str++;
	}
}
int main()
{
	char k[80] = "my name is ";
	char a[80] = "my name is ";
	char b[80] = "wss";
	strcat(k, b);
	my_strcat(a, b);
	printf("%s\n%s",k,a);
	system("pause");
	return 0;
}
