#include <stdio.h>
#include <stdlib.h>
unsigned int reverse_bit(unsigned int value)
{
    int ret = 0;
	int i = 0;
	while (i < 32)
	{
		ret <<= 1;
		ret = ret | (value >> i) & 1;
		i++;
	}
	return ret;
}
int main()
{
	int value = 0;
	int ret = 0;
	scanf("%d", &value);
	ret = reverse_bit(value);
	printf("%u", ret);
	system("pause");
	return 0;
}
