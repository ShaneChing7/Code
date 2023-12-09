#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a[10] = {3,4,2,1,6,5,9,7,8,10};
	int i , j , t ;
	for (i = 0; i < 9; i++)
		for (j = 0; j < 9 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);

	return 0;
}