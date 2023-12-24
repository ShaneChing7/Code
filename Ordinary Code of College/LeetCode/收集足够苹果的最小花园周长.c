#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 0;
	long long apple = 0;
	int c = 0;
	int  i = 0;
	scanf("%d", &a);
	while (apple < a)
	{
		apple = apple + 12 * i * i;
		i++;
	}
	i = i - 1;
	c = 8 * i;
	printf("%d", c);
	return 0;
}