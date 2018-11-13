#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
void my_strcpy(char * dest, const char * str)
{
	assert(str != NULL);
	memset(dest, 0, sizeof(dest));
	while (*str != '\0')
	{
		*dest = *str;
		str++;
		dest++;
	}

}
int main()
{
	char k[80] = "my name is van";
	char a[80] = "my name is van";
	char b[80] = "wss";
	strcpy(k, b);
	my_strcpy(a, b);
	printf("%s\n%s", a,k);
	system("pause");
	return 0;
}
