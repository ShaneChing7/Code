#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
	int main()
	{
		int n = 0;
		scanf("%d", &n);
		int j;
		for (int i = 1; i <= n; i++) {
			for (j = 1; j <= n - i; j++)
				putchar(' ');
			for (j = 1; j <= 2 * i - 1; j++)
				putchar('*');
			putchar('\n');
		}
		for (int i = 1; i <= n - 1; i++) {
			for (j = 1; j <= i; j++)
				putchar(' ');
			for (j = 1; j <= 2 * (n - 1) - 2*(i-1)-1; j++)
				putchar('*');
			putchar('\n');
		}
		return 0;
	}