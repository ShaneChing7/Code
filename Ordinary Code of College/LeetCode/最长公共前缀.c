#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
char* longestCommonPrefix(char** strs, int strsSize)
{
	if (strsSize == 0) {
		return "";
	}
	for (int i = 0; i < strlen(strs[0]); i++) {
		for (int j = 1; j < strsSize; j++) {
			if (strs[0][i] != strs[j][i])
			{
				strs[0][i] = '\0';
				return strs[0];
			}
		}
	}
	return strs[0];
}

/*˼·
�ѵ�һ���ַ����ó�����ѭ��1����Ȼ������������ֵ����Ӧ�ַ�����Ƚϣ�ѭ��2��
��Ȼ���ж��Ƿ���ͬ�������һ���ַ���ͬ������ַ���'\0'��Ȼ���µ����鸳��strs[0]��Ȼ��return �µ�strs[0];

���ߣ�ShaneChing
*/