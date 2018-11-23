#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
char * my_strstr(const char * dest, const char * str)
{
	char *start = dest;
	char *substart = str;
	char *k = dest;
	while (*k)
	{
		start = k;
		while (*start != '\0' && *substart != '\0' && *start == *substart)
		{
			start++;
			substart++;
		}
		if (*substart == '\0')
		{
			return k;
		}
		substart = str;
		k++;
	}
	return NULL;
}
int main()
{
	char str1[] = "This is a simple string";
	char str2[] = "This is a simple string";
	char * pch1;
	char * pch2;
	pch1 = strstr(str1, "simple");
	pch2 = my_strstr(str2, "simple");
	strncpy(pch1, "sample", 6);
	strncpy(pch2, "sample", 6);
	printf("%s\n%s", str1,str2);
	system("pause");
	return 0;
}
