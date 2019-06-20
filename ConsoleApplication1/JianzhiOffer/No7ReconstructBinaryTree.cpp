#include"No7ReconstructBinaryTree.h"
#include<exception>
#include<iostream>

using namespace std;

TreeNode* ReconstructTree(int* Preorder, int* Inorder, int Length) {
	if (Preorder == nullptr || Inorder == nullptr) {
		return nullptr;
	}
	else {
		return ReconstructCore(Preorder, Preorder+Length -1, Inorder, Inorder+Length-1);
	}
}

TreeNode* ReconstructCore(int* PreorderStart, int* PreorderEnd,
	int* InorderStart,int* InorderEnd) {
	int nRootValue = *PreorderStart;
	TreeNode* root = new TreeNode(nRootValue,nullptr,nullptr);
	if (PreorderStart == PreorderEnd) {
		if (InorderStart == InorderEnd) {
			return root;
		}
		else {
			throw std::exception("invalid input, the length of inorder is different with preorder");
		}
	}
	int* rootInorder = InorderStart;
	while (rootInorder <= InorderEnd && *rootInorder != nRootValue)
		rootInorder++;
	if (rootInorder == InorderEnd && *rootInorder != nRootValue)
		throw exception("invaild input, no root in Inorder");
	int leftLength = rootInorder - InorderStart;
	if (leftLength > 0) 
		root->m_pLeft = ReconstructCore(PreorderStart+1,PreorderStart+leftLength,
			InorderStart,rootInorder-1);
	if(leftLength<PreorderEnd-PreorderStart)
		root->m_pRight = ReconstructCore(PreorderStart + leftLength + 1, PreorderEnd,
			rootInorder + 1, InorderEnd);
	return root;
}

void PrintPreoder(TreeNode* root) {
	if (root->m_pLeft!=nullptr) PrintPreoder(root->m_pLeft);
	if (root->m_pRight!=nullptr) PrintPreoder(root->m_pRight);
	if (root != nullptr) cout << root->m_nValue << endl;
}


