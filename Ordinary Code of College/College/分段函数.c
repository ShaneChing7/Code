#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	double x = 0;
	double y = 0;          //初始化两个double型的变量x，y
	printf("x=");
	scanf("%lf", &x);      //调用输入函数
	
	if (x >= 10)           //if判断x的值,并带入对应的函数方程
		y = 3*x-11;
	
	else 
		if (x >= 1) 
		y = (3-x)/5;
		
	else 

		y = x;		
	
	printf("y=%lf", y);    //调用输出函数输出y的值
	
	return 0;
}