#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
//*��Ч����*
/* ˼·��
   ��������ȫ������ջ�У���������ջ��Ԫ��һһƥ��
   ƥ��ɹ���ջ��Ԫ�س�ջ����ƥ��return false�������ջ�Ƿ�Ϊ��
          *ע�����������ŵ�ջΪ�յ����*
*/
bool isValid(char* s) {
	char stack[10001];
	int top = -1;
	for (int i = 0; s[i] != '\0'; i++) 
	{
		char ch = s[i];
		if (ch == '[' || ch == '{' || ch == '(')
		{
			stack[++top] = ch;
		}
		else if (ch == ']' || ch == '}' || ch == ')')
		{
			if (top == -1)
				return false;                       // "])}" ���������ŵ�ջΪ��
			char topchar = stack[top];
			if ((ch == ']' && topchar == '[')||( ch == '}' && topchar == '{') || (ch == ')' && topchar == '('))
				top--;                              //ƥ��ɹ���Ԫ���˳�ջ��
			else
				return false;                       //"{[)}",ƥ�䲻�ɹ���return false
		}
	}
	return top == -1;                               //���ջ�Ƿ�Ϊ�գ�Ϊ��������Ԫ���˳�ջ����Ϊ��Ч����
}

int main()
{
	char s[10] = "([)]";
	if (isValid(s))
		printf("��Ч����\n");
	else
		printf("��Ч����\n");
	return 0;
}