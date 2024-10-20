#define _CRT_SECURE_NO_WARNINGS
#include<stddef.h>
#include<malloc.h>
//µÝ¹é
  struct ListNode {
      int val;
      struct ListNode *next;
  };
 //µü´ú
  struct ListNode {
	  int val;
	  ListNode* next;
	  ListNode() : val(0), next(nullptr) {}
	  ListNode(int x) : val(x), next(nullptr) {}
	  ListNode(int x, ListNode* next) : val(x), next(next) {}

  };
  //µÝ¹é£¬Ö»¿¼ÂÇÒ»²ã¼´¿É
struct ListNode* mergeTwoLists_1(struct ListNode* list1, struct ListNode* list2)
{
	if (list1 == NULL)
		return list2;
	if (list2 == NULL)
		return list1;
	if (list1->val <= list2->val)
	{
		list1->next = mergeTwoLists_1(list1->next, list2);
		return list1;
	}
		list2->next = mergeTwoLists_1(list1, list2->next);
		return list2;
}

//µü´ú·¨
struct ListNode* mergeTwoLists_2(struct ListNode* list1, struct ListNode* list2)
{
	ListNode* preHead = new ListNode(-1);
	ListNode* list3 = preHead;

	while (list1 != NULL && list2 != NULL)
	{
		if (list1->val < list2->val)
		{
			list3->next = list1;
			list1 = list1->next;
		}
		else
		{
			list3->next = list2;
			list2 = list2->next;
		}
		list3 = list3->next;
	}
	list3->next = list1 == NULL ? list2 : list1;
	return preHead->next;
}
