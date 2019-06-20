#ifndef NO22TO24ROBUST_H
#define NO22TO24ROBUST_H

struct ListNode {
	int m_nValue;
	ListNode* m_pNext;
};

struct TreeNode {
	double m_nValue;
	TreeNode* m_pLeft;
	TreeNode* m_pRight;
};

class No22To24Robust {
public:
	ListNode* FindKthToTail(ListNode* pListNode, int k);
public:
	ListNode* MeetingNode(ListNode* pHead);
	ListNode* EntryNodeOfLoop(ListNode* pHead);
	ListNode* ReverseList(ListNode* pHead);
public:
	ListNode* Merge(ListNode* pHead1, ListNode* pHead2); 
public:
	bool DoubleEqual(double num1, double num2);
	bool DoseHasSubTreeCore(TreeNode* pTree1, TreeNode* pTree2);
	bool DoseHasSubTree(TreeNode* pTree1, TreeNode* pTree2);
};

#endif // !NO22TO24ROBUST_H

