#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int x, a, b, c,y;										//����5������
	printf("������һ����λ����");
		scanf("%d", &x);									//�������뺯��������һ����λ��
			a = x / 100;									//a=��λ��
			b = x / 10 % 10;								//b=ʮλ��
			c = x % 10;										//c=��λ��
			y = pow(a, 3) + pow(b, 3) + pow(c, 3);			//��λ�������η���
				if (y == x)									//�ж�y�Ƿ����x
				{
				printf("����һ��ˮ�ɻ���\n");
				}
				else
				{
				printf("�ⲻ��ˮ�ɻ���\n");
				}

	return 0;
}