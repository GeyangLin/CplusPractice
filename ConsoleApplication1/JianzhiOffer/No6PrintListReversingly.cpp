#include<stack>
#include<iostream>
#include "No6PrintListReversingly.h"

using namespace std;

void PrintListReversingly_Iteratively(ListNode* pHead) {
	stack<ListNode*>nodes;
	ListNode* pNode = pHead;
	while (pNode != nullptr) {
		nodes.push(pNode);
		pNode = pNode->m_pNext;
	}
	while (!nodes.empty()) {
		pNode = nodes.top();
		cout << pNode->m_nValue << endl;
		nodes.pop();
	}
}

void PrintListReversingly_Recursively(ListNode* pHead) {
	if (pHead != nullptr) {
		if (pHead->m_pNext != nullptr) {
			PrintListReversingly_Recursively(pHead->m_pNext);
		}
		cout << pHead->m_nValue << endl;
	}
}

void print() {
	cout << "hello world" << endl;
}