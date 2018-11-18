#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void * my_memmove(void *dst,const void * src,size_t num)
{
	void * ret = dst;
	if (src <= dst && dst < (char *)src + num)
	{
		dst = (char *)dst + num - 1;
		src = (char *)src + num - 1;
		while (num--)
		{
			*(char *)dst = *(char *)src;
			dst = (char *)dst - 1;
			src = (char *)src - 1;
		}
	}
	else{
		while (num--)
		{
			*(char *)dst = *(char *)src;
			dst = (char *)dst + 1;
			src = (char *)src + 1;
		}
	}
	return ret;
}

int main()
{
	char str[] = "abcd";
	my_memmove(str + 1, str, 4);
	system("pause");
	return 0;
}
