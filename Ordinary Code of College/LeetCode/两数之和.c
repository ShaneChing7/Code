#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<malloc.h>

int* fun(int* nums, int target,int numsize)
{
	int* result = NULL;
	for (int i = 0; i < numsize; i++)
		for (int j = i + 1; j < numsize; j++)
			if (nums[i] + nums[j] == target) {
				result = (int*)malloc(sizeof(int) * 2);
				result[0] = i;
				result[1] = j;
				
			}
			return result;
			free(result);
}

int main()
{
	
	int nums[] = { 2,7,11,5 };
	int target = 0;
	int numsize = sizeof(nums) / sizeof(int);
	scanf("%d", &target);
	int*re=fun(nums, target,numsize);
	for (int i = 0; i < 2; i++)
		printf("[%d]", re[i]);
	return 0;
}