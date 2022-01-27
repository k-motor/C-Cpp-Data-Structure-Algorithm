#include<stdio.h>
#include<stdlib.h>

typedef struct listNode
{
	int value;
	struct listNode *next;
}ListNode;

void insertNode(ListNode **ptrHead, int value)
{
	ListNode *tempNode = (ListNode *)malloc(sizeof(ListNode));
	if(!tempNode)
	{
		printf("insert error!!\n");
		return ;
	}

	tempNode->value = value;
	tempNode->next = *ptrHead;
	*ptrHead = tempNode;
}

void insertAtEnd(ListNode **ptrHead, int value)
{
	ListNode *head = *ptrHead;
	ListNode *tempNode = (ListNode *)malloc(sizeof(ListNode));
	
	if(!tempNode)
	{
		printf("insert error!!\n");
		return ;
	}
	tempNode->value = value;
	tempNode->next = NULL;

	if(head == NULL)
	{
		tempNode->value = value;
		*ptrHead = tempNode;
		printf("Head is null. Insert OK!\n");
	}

	while(head->next != NULL)
	{
		head = head->next;
	}

	tempNode->next = head->next;
	head->next = tempNode;
}

void printList(ListNode *head)
{
	printf("List Output: ");
	while(head)
	{
		printf(" %d", head->value);
		head = head->next;
	}
	printf("\n");
}

int main(void)
{
	ListNode *head = NULL;
	
	insertNode(&head, 1);
	insertNode(&head, 2);
	insertNode(&head, 3);
	insertAtEnd(&head, 10);
	
	printList(head);
	return 0;
}
