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
int float_cmp(const void * p1, const void * p2)
{
	return(*(float *)p1 > *(float *)p2);
}
int main()
{
	int i = 0;
	int a[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
	char b[] = { 'd', 'g', 'a', 'o', 'q' };
	float c[] = { 3*1.0, 2*1.0, 1*1.0 };
	qsort(a, sizeof(a) / sizeof(a[0]), sizeof(int), int_cmp);
	qsort(b, sizeof(b) / sizeof(b[0]), sizeof(char), char_cmp);
	qsort(c, sizeof(c) / sizeof(c[0]), sizeof(float), float_cmp);
	for (i = 0; i < (sizeof(a) / sizeof(a[0])); i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
	for (i = 0; i < (sizeof(b) / sizeof(b[0])); i++)
	{
		printf("%c", b[i]);
	}
	printf("\n");
	for (i = 0; i < (sizeof(c) / sizeof(c[0])); i++)
	{
		printf("%4.2f ", c[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}


