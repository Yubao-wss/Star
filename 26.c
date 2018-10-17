#include <stdio.h>
#include <stdlib.h>
int reverse_string(char * string)
{
	int len = 0;
	int i;
	char *p;
	char temp;
	p = string;
	while (*p != '\0')
	{
		len++;
		p++;
	}
	for (i = 0; i < len / 2; i++)
	{
		temp = string[i];
		string[i] = string[len - i - 1];
		string[len - i - 1] = temp;
	}
	return 0;
}
int main()
{
	char a[] = "wss";
	reverse_string(a);
	printf("%s", a);
	system("pause");
	return 0;
}
