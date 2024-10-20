#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>
typedef struct ListNode
{
	int val;
	struct ListNode* next;

}ListNode;

ListNode* swapPairs(ListNode* head)
{
	if (head == NULL || head->next == NULL)
		return head;
	ListNode dummyhead;
	dummyhead.next = head;
	ListNode* temp = (ListNode*)malloc(sizeof(ListNode));
	temp = &dummyhead;
	while (temp->next != NULL && temp->next->next != NULL)
	{
		ListNode* node1 = temp->next;
		ListNode* node2 = node1->next;
		temp->next = node2;
		node1->next = node2->next;
		node2->next = node1;
		temp = node1;
	}
	return dummyhead.next;
}