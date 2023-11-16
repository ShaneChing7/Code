#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//回文数的判断
int Reverse(int x)
{
	if (x <= 0 || x % 10 == 0)					 //小于等于0或者末尾等于0的都不是回文数
	{
		printf("No!");
	}
	
	else
	{
		int reversed = 0;                         //把数字分为两段，判断后一段反转后的数是否与前一段相等
											
		while (x > reversed)			          //当前一段数大于后一段数时会一直循环直到小于等于后一段数
		{
			reversed = reversed * 10 + x % 10;    //reversed为反转后的后一段数
			x = x / 10;							  //x为前一段数
		}
		if (x == reversed || x == reversed / 10)  /*当为偶数位数时判断x是否=reversed，
													比如123321，此时reversed=123，x=123；
												    
													当为奇数位时需要把后一段的个位去掉再判断x是否=reversed，
													比如12321，此时根据程序reversed=123，需要把3去除后跟x=12比较*/
			printf("Yes!");
	}
}

	int main(){
	
		int x = 0;
		puts("***回文数的判断***");
		puts("请输入一个整数:");
		scanf("%d", &x);
		Reverse(x);
		return 0;
	}
	








