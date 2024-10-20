#define _CRT_SECURE_NO_WARNINGS
#include<stdbool.h>
#include<malloc.h>
typedef struct ListNode
{
	int val;
	struct ListNode* next;
}ListNode;

//wrong version
bool isPalindrome(struct ListNode* head) {
	struct ListNode* s;
	struct ListNode* q;
	struct ListNode* p;
	struct ListNode* head2;
	head2 = (struct ListNode*)malloc(sizeof(struct ListNode));
	head2->next = NULL;
	q = head2;
	p = head->next;
	int n = 0;
	if (head->next != NULL) {
		while (p->next != NULL)
		{
			p->val = n;
			p = p->next;
			s = (struct ListNode*)malloc(sizeof(struct ListNode));
			s->val = n;
			s->next = q->next;
			head2->next = s;
			q = s;
		}
		q = head2->next;
		p = head->next;
		while (p->next != NULL && q->next != NULL)
		{
			if (p->val == q->val)
			{
				p = p->next;
				q = q->next;
			}
		}
		if (p && q)
		{
			return true;
		}
		return false;
	}
	return true;
}

//right version
bool isPalindrome(struct ListNode* head) {

	int num[50000],val_num = 0;
	while (head != NULL)
	{
		num[val_num] = head->val;
		head = head->next;
		val_num++;
	}
	for (int i = 0, j = val_num; i < j; i++,j--)
	{
		if (num[i] != num[val_num])
		{
			return false;
		}

	return true;

}
