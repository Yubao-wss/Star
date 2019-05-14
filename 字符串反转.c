#include <stdio.h>
#include <stdlib.h>
int my_strlen(char *string)
{
	if (*string == '\0')
		return 0;
	else
		return 1 + my_strlen(string + 1);
}
void reverse_string(char *string)
{
	int len = my_strlen(string);
	if (len <= 1)
		return;
	else
	{
		char temp = string[0];
		string[0] = string[len - 1];
		string[len - 1] = '\0';
		reverse_string(string + 1);
		string[len - 1] = temp;
	}
		
}
int main()
{
	
	char a[] = "114514";
	reverse_string(a);
	printf("%s", a);
	system("pause");
	return 0;
}
