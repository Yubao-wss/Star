#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("***********************************\n");
	printf("************  1.play  *************\n");
	printf("************  0.exit  *************\n");
	printf("***********************************\n");
}
void game()
{
	int ret = rand() % 100 + 1;
	int num = 0;
	while (1)
	{
		printf("请猜数字：");
		scanf("%d", &num);
		if (ret == num)
		{
			printf("恭喜你猜对了\n");
			break;
		}
		else if (ret > num)
		{
			printf("猜小了\n");
		}
		else 
		{
			printf("猜大了\n");
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
		
	}
	    while (input);
		return 0;
}
