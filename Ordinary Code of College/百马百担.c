#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c;	
		for (a = 0; a < 34; a++){
			for (b = 0; b < 51; b++) {
				for (c = 0; c < 101; c++) {
					if (a + b + c == 100 && a * 3 + b * 2 + c / 2 == 100 && c % 2 == 0) {

						printf("大马=%d 中马=%d 小马=%d\n\n", a, b, c);
					}
				}
			}
		}
	return 0;
}