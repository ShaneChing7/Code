#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, s, t;                             //����5������a��b��c��s��t��a��b��cΪ�����α߳���sΪ�����������tΪ���ܳ�
	printf("���������߳�a b c��");
	scanf("%lf %lf %lf", &a, &b, &c);
	if (a + b > c&&b + c > a && a + c > b)            //���߼��루&&���ж������������Ƿ���������δ��ڵ�����
	{
	t = (a + b + c) / 2.0;							  //tΪ���ܳ����ڼ������������
	s = sqrt(t * (t - a) * (t - b) * (t - c));		  //�ú��׹�ʽ�������������
	printf("�����δ����� s=%lf", s);
	}
	
	else
	{
		printf("�����β�����\n");
	}
	
	return 0;
}