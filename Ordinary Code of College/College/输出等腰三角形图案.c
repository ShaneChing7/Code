#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
		int j;	
	for (int i = 1; i <= 5; i++) {
		for (j=1; j <= 5 - i; j++)
			putchar(' ');
		for (j=1 ; j <= 2*i-1; j++)
			putchar('*');
			putchar('\n');
	}
	return 0;
}