#include <stdio.h>
int main()
	
{
		int i = 0;
		int count = 0;           
		for (i = 1; i <= 100; i++ )
		{
			if (i % 10 == 9)
			{
				count++;
			}
			if (i % 100 - i % 10 == 90)
			{
				count++;
			}
		}
		printf("9出现的次数：%d\n", count);
		getchar();
		return 0;
}

