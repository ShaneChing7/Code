#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
//*有效括号*
/* 思路：
   把左括号全部放入栈中，右括号与栈顶元素一一匹配
   匹配成功则栈顶元素出栈，不匹配return false，最后检查栈是否为空
          *注意遇到右括号但栈为空的情况*
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
				return false;                       // "])}" 遇到右括号但栈为空
			char topchar = stack[top];
			if ((ch == ']' && topchar == '[')||( ch == '}' && topchar == '{') || (ch == ')' && topchar == '('))
				top--;                              //匹配成功，元素退出栈顶
			else
				return false;                       //"{[)}",匹配不成功，return false
		}
	}
	return top == -1;                               //检查栈是否为空，为空则所有元素退出栈，则为有效括号
}

int main()
{
	char s[10] = "([)]";
	if (isValid(s))
		printf("有效括号\n");
	else
		printf("无效括号\n");
	return 0;
}