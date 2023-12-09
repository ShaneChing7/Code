#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{

	int n=1;
	double s=1;
	while (s < 8)
	{
		s = s + 1.0/ n;
		n++;
	}
	if (s - 8 < 8 - (s - 1.0 / (n - 2)))
		printf("%lf,%d", s, n - 1);
	else
		printf("%lf,%d", s - 1.0 / (n - 2), n - 2);

	return 0;
}