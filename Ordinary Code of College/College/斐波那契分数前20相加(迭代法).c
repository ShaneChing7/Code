#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int t;
	float sum=0;
	float a = 1, b = 2;

	for (int n = 1; n <= 20; n++) {	
		t = a;
		a = b;
		b = b + t;
		sum += a / b;
	}
	printf("%.4f", sum);








	return 0;
}