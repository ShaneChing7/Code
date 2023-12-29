#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int fun(char* a)
{
	int arr[26];
	arr['I' - 'A'] = 1;
	arr['V' - 'A'] = 5;
	arr['X' - 'A'] = 10;
	arr['L' - 'A'] = 50;
	arr['C' - 'A'] = 100;
	arr['D' - 'A'] = 500;
	arr['M' - 'A'] = 1000;
	int n = strlen(a);
	int ans = 0;
	int i = 0;
	for (i = 0; i < n; i++)
	{
		int value = arr[a[i] - 'A'];
		if (i < n - 1 && value < arr[a[i + 1] - 'A'])
			ans = -value + ans;
		else
			ans = value + ans;
	}
	return ans;
}

int main()
{

	char a[10] = "IV";
	printf("%d", fun(a));

	return 0;
}