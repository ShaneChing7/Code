#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int  r4, r100, r400,year,month,day,Feb,total;
	int Jan = 31, Mar = 31, May = 31, Jul = 31, Aug = 31, Oct = 31, Dec = 31;
	int Apr = 30, Jun = 30, Sep = 30, Nov = 30;
	printf("������ �� �� ��:");
	scanf("%d %d %d", &year,&month,&day);
	r4 = year % 4;
	r100 = year % 100;
	r400 = year % 400;
	if ((r4 == 0 && r100 != 0 || r400 == 0)) {
		Feb = 29;
		switch (month) {
		case(1):printf("����%d��ĵ�%d��", year,day); break;
		case(2):printf("����%d��ĵ�%d��", year, Jan + day); break;
		case(3):printf("����%d��ĵ�%d��", year, Jan + Feb + day); break;
		case(4):printf("����%d��ĵ�%d��", year, Jan + Feb + Mar + day); break;
		case(5):printf("����%d��ĵ�%d��", year, Jan + Feb + Mar + Apr + day); break;
		case(6):printf("����%d��ĵ�%d��", year, Jan + Feb + Mar + Apr + May + day); break;
		case(7):printf("����%d��ĵ�%d��", year, Jan + Feb + Mar + Apr + May + Jun + day); break;
		case(8):printf("����%d��ĵ�%d��", year, Jan + Feb + Mar + Apr + May + Jun + Jul + day); break;
		case(9):printf("����%d��ĵ�%d��", year, Jan + Feb + Mar + Apr + May + Jun + Jul + Aug + day); break;
		case(10):printf("����%d��ĵ�%d��", year, Jan + Feb + Mar + Apr + May + Jun + Jul + Aug + Sep + day); break;
		case(11):printf("����%d��ĵ�%d��", year, Jan + Feb + Mar + Apr + May + Jun + Jul + Aug + Sep + Oct + day); break;
		case(12):printf("����%d��ĵ�%d��", year, Jan + Feb + Mar + Apr + May + Jun + Jul + Aug + Sep + Oct + Nov + day); break;
		}
	}

	else {
		Feb = 28;
		switch (month) {
		case(1):printf("����%d��ĵ�%d��", year, day); break;
		case(2):printf("����%d��ĵ�%d��", year, Jan + day); break;
		case(3):printf("����%d��ĵ�%d��", year, Jan + Feb + day); break;
		case(4):printf("����%d��ĵ�%d��", year, Jan + Feb + Mar + day); break;
		case(5):printf("����%d��ĵ�%d��", year, Jan + Feb + Mar + Apr + day); break;
		case(6):printf("����%d��ĵ�%d��", year, Jan + Feb + Mar + Apr + May + day); break;
		case(7):printf("����%d��ĵ�%d��", year, Jan + Feb + Mar + Apr + May + Jun + day); break;
		case(8):printf("����%d��ĵ�%d��", year, Jan + Feb + Mar + Apr + May + Jun + Jul + day); break;
		case(9):printf("����%d��ĵ�%d��", year, Jan + Feb + Mar + Apr + May + Jun + Jul + Aug + day); break;
		case(10):printf("����%d��ĵ�%d��", year, Jan + Feb + Mar + Apr + May + Jun + Jul + Aug + Sep + day); break;
		case(11):printf("����%d��ĵ�%d��", year, Jan + Feb + Mar + Apr + May + Jun + Jul + Aug + Sep + Oct + day); break;
		case(12):printf("����%d��ĵ�%d��", year, Jan + Feb + Mar + Apr + May + Jun + Jul + Aug + Sep + Oct + Nov + day); break;
		}
	}


	return 0;
}