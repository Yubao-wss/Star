#include <stdio.h>
#include <stdlib.h>
int exchange(int water)
{
	if (water < 2)
	{
		return water;
	}
	else
		return water + exchange(water / 2);
}
int main()
{
	int money = 20;
	int water = 0;
	water = money / 1;
	int ret = exchange(water);
	printf("用%d元钱，可以买%d瓶汽水", money, ret);
	system("pause");
	return 0;
}
