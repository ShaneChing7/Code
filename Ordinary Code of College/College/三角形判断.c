#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, s, t;                             //定义5个变量a，b，c，s，t；a，b，c为三角形边长，s为三角形面积，t为半周长
	printf("请输入三边长a b c：");
	scanf("%lf %lf %lf", &a, &b, &c);
	if (a + b > c&&b + c > a && a + c > b)            //用逻辑与（&&）判断三角形三边是否符合三角形存在的条件
	{
	t = (a + b + c) / 2.0;							  //t为半周长用于计算三角形面积
	s = sqrt(t * (t - a) * (t - b) * (t - c));		  //用海伦公式计算三角形面积
	printf("三角形存在且 s=%lf", s);
	}
	
	else
	{
		printf("三角形不存在\n");
	}
	
	return 0;
}