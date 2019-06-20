#include"No22To26Robust.h"
#include<iostream>
#include<algorithm>

using namespace std;

ListNode* No22To24Robust::FindKthToTail(ListNode* pListNode, int k) {
	if (pListNode == nullptr||k==0)
		return nullptr;
	ListNode* pAhead = pListNode;
	ListNode* pBhead = pListNode;
	for (size_t i = 0; i < k-1; i++)
	{
		if (pAhead->m_pNext != nullptr)
			pAhead = pAhead->m_pNext;
		else
			return nullptr;
	}
	while (pAhead->m_pNext != nullptr) {
		pAhead = pAhead->m_pNext;
		pBhead = pBhead->m_pNext;
	}
	return pBhead;
}

ListNode* No22To24Robust::MeetingNode(ListNode* pHead) {
	if (pHead == nullptr||pHead->m_pNext==nullptr)
		return nullptr;
	ListNode* pSlow = pHead;
	ListNode* pFast = pHead;
	while (pSlow->m_pNext != nullptr&&pFast->m_pNext->m_pNext != nullptr) {
		if (pFast == pSlow)
			return pFast;
		pSlow = pSlow->m_pNext;
		pFast = pFast->m_pNext->m_pNext;
	}
	return nullptr;
}

ListNode* No22To24Robust::EntryNodeOfLoop(ListNode* pHead) {

	ListNode* pMeetingNode = MeetingNode(pHead);
	if (pMeetingNode == nullptr)
		return nullptr;

	int nLength = 1;
	ListNode* pIndex = pMeetingNode;
	while (pIndex->m_pNext != pIndex) {
		pIndex = pIndex->m_pNext;
		nLength++;
	}
	
	ListNode* pFast = pHead;
	ListNode* pSlow = pHead;
	for (size_t i = 0; i < nLength; i++)
		pFast = pFast->m_pNext;
	while (pFast != pSlow) {
		pSlow = pSlow->m_pNext;
		pFast = pFast->m_pNext;
	}
	return pSlow;
}

ListNode* No22To24Robust::ReverseList(ListNode* pHead) {
	if (pHead == nullptr&&pHead->m_pNext == nullptr)
		return pHead;
	ListNode* pNewhead = pHead->m_pNext;
	ListNode* pNewtail = pHead;
	pNewtail->m_pNext = nullptr;
	while (pNewhead !=nullptr) {
		ListNode* pTemp = pNewhead->m_pNext;
		pNewhead->m_pNext = pNewtail;
		pNewtail = pNewhead;
		pNewhead = pTemp;
	}
	return pNewhead;
}

ListNode* No22To24Robust::Merge(ListNode* pHead1, ListNode* pHead2) {
	if (pHead1 == nullptr)
		return pHead2;
	if (pHead2 == nullptr)
		return pHead1;
	ListNode* pMergeHead;
	if (pHead1->m_nValue < pHead2->m_nValue) {
		pMergeHead = pHead1;
		pMergeHead->m_pNext = Merge(pHead1->m_pNext, pHead2);
	}
	else {
		pMergeHead = pHead2;
		pMergeHead->m_pNext = Merge(pHead1, pHead2->m_pNext);
	}
	return pMergeHead;
}

bool No22To24Robust::DoubleEqual(double num1, double num2) {
	if (abs(num1 - num2) < 0.000001)
		return true;
	else
		return false;
}

bool No22To24Robust::DoseHasSubTreeCore(TreeNode* pTree1, TreeNode* pTree2) {
	if (pTree1 == nullptr)
		return false;
	if (pTree2 == nullptr)
		return true;
	if (pTree1->m_nValue != pTree2->m_nValue)
		return false;
	return DoseHasSubTreeCore(pTree1->m_pLeft, pTree2->m_pLeft) &&
		DoseHasSubTreeCore(pTree1->m_pRight, pTree2->m_pRight);
}

bool No22To24Robust::DoseHasSubTree(TreeNode* pTree1, TreeNode* pTree2) {

	bool result = false;
	if (pTree1 != nullptr && pTree2 != nullptr) {
		if (DoubleEqual(pTree1->m_nValue, pTree2->m_nValue))
			result = DoseHasSubTreeCore(pTree1, pTree2);
		if (!result)
			result = DoseHasSubTree(pTree1->m_pLeft, pTree2);
		if (!result)
			result = DoseHasSubTree(pTree1->m_pRight, pTree2);
	}
	return result;
}