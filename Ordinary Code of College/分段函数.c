#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	double x = 0;
	double y = 0;          //��ʼ������double�͵ı���x��y
	printf("x=");
	scanf("%lf", &x);      //�������뺯��
	
	if (x >= 10)           //if�ж�x��ֵ,�������Ӧ�ĺ�������
		y = 3*x-11;
	
	else 
		if (x >= 1) 
		y = (3-x)/5;
		
	else 

		y = x;		
	
	printf("y=%lf", y);    //��������������y��ֵ
	
	return 0;
}