#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{

	char* week[7] = { "Monday" , "Tuesday" , "Wednesday" , "Thursday","Friday" , "Saturday" , "Sunday" };
	int monthday[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 };
	int year = 0, month = 0, day = 0;
	int days = 0;
	scanf_s("%d%d%d", &year, &month, &day);
	days = 365 * (year - 1971);
	for (int i = 1971; i < year; i++)
	{
		if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
		{
			days++;
		}
	}
	for (int i = 0; i < month - 1; i++)
	{
		days = days + monthday[i];
		if (i == 1)
		{
			if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
				days += 1;
		}
	}

	days += day;
	printf("%s", week[(days + 3) % 7]);
}