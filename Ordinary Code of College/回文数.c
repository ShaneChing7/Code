#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//���������ж�
int Reverse(int x)
{
	if (x <= 0 || x % 10 == 0)					 //С�ڵ���0����ĩβ����0�Ķ����ǻ�����
	{
		printf("No!");
	}
	
	else
	{
		int reversed = 0;                         //�����ַ�Ϊ���Σ��жϺ�һ�η�ת������Ƿ���ǰһ�����
											
		while (x > reversed)			          //��ǰһ�������ں�һ����ʱ��һֱѭ��ֱ��С�ڵ��ں�һ����
		{
			reversed = reversed * 10 + x % 10;    //reversedΪ��ת��ĺ�һ����
			x = x / 10;							  //xΪǰһ����
		}
		if (x == reversed || x == reversed / 10)  /*��Ϊż��λ��ʱ�ж�x�Ƿ�=reversed��
													����123321����ʱreversed=123��x=123��
												    
													��Ϊ����λʱ��Ҫ�Ѻ�һ�εĸ�λȥ�����ж�x�Ƿ�=reversed��
													����12321����ʱ���ݳ���reversed=123����Ҫ��3ȥ�����x=12�Ƚ�*/
			printf("Yes!");
	}
}

	int main(){
	
		int x = 0;
		puts("***���������ж�***");
		puts("������һ������:");
		scanf("%d", &x);
		Reverse(x);
		return 0;
	}
	








