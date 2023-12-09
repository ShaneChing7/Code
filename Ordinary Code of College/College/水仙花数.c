#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int x, a, b, c,y;										//定义5个变量
	printf("请输入一个三位数：");
		scanf("%d", &x);									//调用输入函数，输入一个三位数
			a = x / 100;									//a=百位数
			b = x / 10 % 10;								//b=十位数
			c = x % 10;										//c=个位数
			y = pow(a, 3) + pow(b, 3) + pow(c, 3);			//各位数的三次方和
				if (y == x)									//判断y是否等于x
				{
				printf("这是一个水仙花数\n");
				}
				else
				{
				printf("这不是水仙花数\n");
				}

	return 0;
}