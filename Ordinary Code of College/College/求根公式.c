#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	double a, b, c,x1,x2,d;						//�������
	printf("������a��b��c��ֵ��");
	scanf("%lf,%lf,%lf", &a, &b, &c);			//�������뺯��
	if (pow(b, 2) - 4 * a * c > 0) {			//�жϦ�������
		d = pow(b, 2) - 4 * a * c;				//���������ʽ
		x1 = (-b + sqrt(d)) / 2 * a;
		x2 = (-b - sqrt(d)) / 2 * a;
		printf("x1=%lf x2=%lf", x1, x2);
	}
	else {
		printf("������ʵ��\n");
	}

	return 0;
}