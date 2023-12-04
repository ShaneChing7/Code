#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c, count=0, sum=0;
	scanf("%d", &a);
	c = a;
	while (a!=0)
	{
		count++;
		a = a / 10;	
	}
	for (int i = 0; i < count; i++)
	{
		b = c % 10;
		c = c / 10;
		sum = sum + b * pow(8, i);
	}
	printf("%d", sum);
	return 0;
}