#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <string.h>
#include<math.h> 
int int_cmp(const void * p1, const void * p2)
{
	return(*(int *)p1 > *(int *)p2);
}
int char_cmp(const void * p1, const void * p2)
{
	return(*(char *)p1 > *(char *)p2);
}
int str_cmp(const void * p1, const void * p2)
{
	return strcmp((char *)*(int *)p1 , (char *)*(int *)p2);
}
void swap(void *p1, void *p2, int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		char tmp = *((char *)p1 + i);
		*((char *)p1+ i ) = *((char *)p2 + i);
		*((char *)p2 + i) = tmp;
	}
}
void my_qsort(void *base, int count, int size, int(*cmp)(void *, void *))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < count - 1; i++)
	{
		for (j = 0; j < count - i - 1; j++)
		{
			if (cmp((char *)base + j*size, (char *)base + (j + 1)*size) > 0)
			{
				swap((char *)base + j*size, (char *)base + (j + 1)*size, size);
			}
		}
	}
}
int main()
{
	int i = 0;
	int a[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
	char b[] = { 'e','c','b','a' };
	char *c[] = { "cccc", "bb", "aaaa" };
	my_qsort(a, sizeof(a) / sizeof(a[0]), sizeof(int), int_cmp);
	my_qsort(b, sizeof(b) / sizeof(b[0]), sizeof(char), char_cmp);
	my_qsort(c, sizeof(c) / sizeof(c[0]), sizeof(char*), str_cmp);
	for (i=0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	for (i = 0; i < sizeof(b) / sizeof(b[0]); i++)
	{
		printf("%c ", b[i]);
	}
	printf("\n");
	for (i = 0; i < sizeof(c) / sizeof(c[0]); i++)
	{
		printf("%s ", c[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
