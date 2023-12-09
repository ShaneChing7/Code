#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	double a, b, c,x1,x2,d;						//定义变量
	printf("请输入a，b，c的值：");
	scanf("%lf,%lf,%lf", &a, &b, &c);			//调用输入函数
	if (pow(b, 2) - 4 * a * c > 0) {			//判断Δ的正负
		d = pow(b, 2) - 4 * a * c;				//利用求根公式
		x1 = (-b + sqrt(d)) / 2 * a;
		x2 = (-b - sqrt(d)) / 2 * a;
		printf("x1=%lf x2=%lf", x1, x2);
	}
	else {
		printf("不存在实根\n");
	}

	return 0;
}