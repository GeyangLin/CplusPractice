#pragma once
#ifndef NO6PRINTLISTREVERSINGLY_H
#define NO6PRINTLISTREVERSINGLY_H

struct ListNode
{
	int m_nValue;
	ListNode * m_pNext;
	ListNode(int val, ListNode* next) {
		this->m_nValue = val;
		this->m_pNext = next;
	}
};
extern void print();
extern void PrintListReversingly_Iteratively(ListNode* pHead);
extern void PrintListReversingly_Recursively(ListNode* pHead);

#endif // !NO6PRINTLISTREVERSINGLY_H
