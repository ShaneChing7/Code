#include <cstddef>
#define _CRT_SECURE_NO_WARNINGS

typedef struct ListNode {
	int val;
	struct ListNode* next;
}ListNode;

//wrong version
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
	ListNode* p;
	ListNode* q;
	p = l1;
	q = l2;
	while (p||q)
	{
		q->val = q->val + p->val;
		p = p->next;
		q = q->next;
	}
	q = l2;
	while (q->next != NULL)
	{
		if (q->val >= 10&&q->next!=NULL)
		{
			q->val = q->val % 10;
			q->next->val++;

		}
		else
		{
			ListNode* s;
			s = (ListNode*)malloc(sizeof(ListNode));
			s->next = NULL;
			q->next = s;
			s->val++;
		}
	}
	return l2;
}


//right version
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
	ListNode* head = NULL;//�½�һ������ ��ͷ
	ListNode* tail = NULL;//��β
	int sum = 0;//��ֵ���
	int carry = 0;//��λ
	while (l1 || l2 )
	{
		int n1 = l1 ? l1->val : 0;
		int n2 = l2 ? l2->val : 0;
		int sum = n1 + n2 + carry;

		if (head == NULL)
		{
			head = tail = malloc(sizeof(ListNode));
			tail->val = sum % 10;//��λ
			tail->next = NULL;
		}
		else
		{
			tail->next = malloc(sizeof(ListNode));
			tail->next->val = sum % 10;//��λ�Ժ��λ��
			tail = tail->next;//�������βָ���ƶ�
			tail -> next = NULL;

		}
		carry = sum / 10;
		if(l1!=NULL)//ָ���ƶ�
		{
			l1 = l1->next;
		}
		if (l2!=NULL)
		{
			l2 = l2->next;
		}
	}
	if (carry > 0)//�жϽ�λ�Ƿ����0����������tail���һ���ڵ�
	{
		tail->next = malloc(sizeof(ListNode));
		tail->next->val = carry;
		tail->next->next = NULL;
	}
	return head;
}