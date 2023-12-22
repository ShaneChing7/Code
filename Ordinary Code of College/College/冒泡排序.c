#include<stdio.h>
#define num 10
int main()
{
	int arr[num] = { 0 };
	int min = 0;
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int a = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = a;
			}
		}

	}

	
	for (int i = 0; i < num; i++)
	{
		printf("%d ", arr[i]);
	}

}