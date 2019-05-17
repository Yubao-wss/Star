int my_strlen(char * str)
{
	int len = 0;
	while (*str++)
	{
		len++;
	}
	return len;
}
void reverse(char* start,char*end)
{
	char temp = 0;
	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
void my_reverse(char* str)
{
	char *start = str;
	char *end = str + my_strlen(str) - 1;
	char *cur = NULL;
	if (str == NULL || str[0] == '\0')
	{
		return;
	}
	reverse(start, end);
	while (*str)
	{
		cur = str;
		while (*str != ' '&&*str != '\0')
		{
			str++;
		}
		end = str - 1;
		reverse(cur, end);
		if (*str == ' ')
		{
			str++;
		}
	}
}
int main()
{
	char a[] = "student a am i";
	my_reverse(a);
	printf("%s\n", a);
	system("pause");
	return 0;
}
