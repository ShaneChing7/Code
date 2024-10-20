#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<ctype.h>
//wrong version
char* capitalizeTitle(char* title) {
	int num = strlen(title);
	int j = 0;
	for (int i = 0; i < num; i++)
	{
		j++;
		if (title[i] == ' ' && j >= 3)
		{
			for (int k = i - j; k < i; k++)
			{
				if (title[k] >= 'A' && title[k] <= 'Z')
					title[k] = tolower(title[k]);
				title[i - j] = toupper(title[i - k]);
			}
			j = 0;
		}
		if (title[i] == ' ' && j < 3)
		{
			for (int k = i - j; k < i; k++)
			{
				if (title[k] >= 'A' && title[k] <= 'Z')
					title[k] = tolower(title[k]);
			}
			j = 0;
		}
	}
	return title;
}

//right version
char* capitalizeTitle(char* title)
{
	int stringlen = strlen(title);
	int left = 0;
	int right = 0;
	while (left < stringlen)
	{
		while (right < stringlen && title[right] != ' ')
		{
			right++;
		}

		if (right - left > 2)
		{
			title[left] = toupper(title[left]);
			left++;
		}

		while (left < right)
		{

				title[left] = tolower(title[left]);
				left++;
		}
		left = ++right;
	}
	return title;
}

int main()
{
	char* ch = "leetcode you cute";
		
	printf("%s", capitalizeTitle(ch));
}