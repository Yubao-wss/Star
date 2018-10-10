#include <stdio.h>
#include <stdlib.h>
int main()
{
	int ch;
	printf("请输入一个字符：\n");
	while (1)
	{
		ch = getchar();
		if (ch >= 'a'&&ch <= 'z')
			printf("%c\n", ch - 32);
		else if (ch >= 'A'&&ch <= 'Z')
			printf("%c\n", ch + 32);
		else if (ch >= '0'&&ch <= '9')
			;
		else
			;
	}
	system("pause");
	return 0;
}
