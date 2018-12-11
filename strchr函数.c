#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
char * my_strchr(const char * dest, char chr)
{
	assert(dest != NULL);
	while (*dest)
	{
		if (*dest == chr)
		{
			return dest;
		}
		dest++;
	}
	return NULL;
}
int main()
{
	char str[] = "This is a simple string";
	char *p1 = strchr(str, 'i');
	char *p2 = my_strchr(str, 'i');
	printf("%p\n%p", p1, p2);
	system("pause");
	return 0;
}
