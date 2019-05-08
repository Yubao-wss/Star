#include <stdio.h>
#include <stdlib.h>
int main()
{
	double sum = 0;
	int i = 0;
	for (i = 1; i <= 2; i++)
	{
		if (i % 2 != 0)
		{
			sum += 1.0 / i;
		}
		else if (i % 2 == 0)
		{
			sum -= 1.0 / i;
		}
	}
	printf("%f", sum);
	system("pause");
	return 0;
}
