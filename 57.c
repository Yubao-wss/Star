#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void * my_memcpy(void *dst,const void * src,size_t num)
{
	void * ret = dst;
	while (num--)
	{
		*(char *)dst = *(char *)src;
		dst = (char *)dst + 1;
		src = (char *)src + 1;
	}
	return ret;
}

int main()
{
	char str1[20] = "aaaa";
	char str2[20] = "ab";
    my_memcpy(str1, str2, 2);
	printf("%s", str1);
	system("pause");
	return 0;
}
