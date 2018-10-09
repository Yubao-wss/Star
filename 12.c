#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 0;
	char password[10] = { 0 };
	while (i<3)
	{
		printf("请输入密码:");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
			break;
		else 
			printf("密码错误!\n");
		i++;
	}
	if (i < 3)
		printf("密码正确,登陆成功!\n");
	else
		printf("3次密码输入错误，退出程序!\n");
	system("pause");
	return 0;
}
