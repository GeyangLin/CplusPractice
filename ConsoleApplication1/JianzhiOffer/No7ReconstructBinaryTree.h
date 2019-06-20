//#pragma once
#ifndef NO7RECONSTRUCTBINARYTREE_H
#define NO7RECONSTRUCTBINARYTREE_H

struct TreeNode {
	int m_nValue;
	TreeNode* m_pLeft;
	TreeNode* m_pRight;
	TreeNode(int val, TreeNode* left, TreeNode* right) {
		this->m_nValue = val;
		this->m_pLeft = left;
		this->m_pRight = right;
	}
};

extern TreeNode* ReconstructCore(int* PreorderStart, int* PreorderEnd,
	int* InorderStart, int* InorderEnd);
extern TreeNode* ReconstructTree(int* Preorder, int* Inorder, int Length);
extern void PrintPreoder(TreeNode* root);


#endif



