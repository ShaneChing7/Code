#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a[9] = { 3,5,6,9,12,17,20,28,32 }, b[7] = { 1,7,10,14,16,25,31 },c[20];
	int i = 0, j = 0, k = 0;

	while (i <9 && j<7)
	{
		if (a[i] > b[j])
			c[k] = b[j++];
		else
			c[k] = a[i++];
		k++;

	}
	if (i < 9)
	{
		for (; i < 9; i++)
			c[k++] = a[i];
	}
	if (j < 7)
	{
		for (; j < 7; j++)
			c[k++] = b[j];
	}

	for (k = 0; k < 16; k++)
		printf("%d ", c[k]);

	return 0;
}