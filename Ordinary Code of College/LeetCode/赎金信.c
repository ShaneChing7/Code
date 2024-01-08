#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool canConstruct(char* ransomNote, char* magazine)
{
	int r = strlen(ransomNote);
	int m = strlen(magazine);
	int i = 0;
	int j = 0;
	int count = 0;
	if (r > m)
		return false;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (ransomNote[i] == magazine[j])
			{

				count++;
				magazine[j] = ' ';
				break;
			}
		}
	}
	if (count == r)
		return true;
	else {
		return false;
	}
}
int main()
{
	char* ransomNote = "aa";
	char* magazine = "aab";
	if (canConstruct(ransomNote, magazine))
		printf("Yes");
	else
		printf("No");

	return 0;
}