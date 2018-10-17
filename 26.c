#include <stdio.h>
#include <stdlib.h>
int reverse_string(char * string)
{
	int len = 0;
	int i;
	char *p;
	char *q;
	char temp;
	p = string;
	while (*p != '\0')
	{
		len++;
		p++;
	}
	q = p - 1;
	p = string;
	for (i = 0; i <= len / 2; i++)
	{
		temp = *p;
		*p = *q;
		*q = temp;
		p++;
		q--;
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
