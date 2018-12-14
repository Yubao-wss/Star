#include <stdio.h>
#include <stdlib.h>
int main()
{
	char mur[] = "ABCD";
	int murderer = 0;
	int i = 0;
	for (i = 1; i <= 4; i++)
	{
		murderer = i;
		if ((murderer != 1) + (murderer == 3) + (murderer == 4) + (murderer != 4) == 3)
			printf("凶手是%c\n", mur[i-1]);
	}
	system("pause");
	return 0;
}
