#include"No2728Tree.h"


TreeNode* TreeProcess::MirroTree(TreeNode* pTree) {
	if (pTree == nullptr)
		return nullptr;
	if (pTree->m_pLeft == nullptr&&pTree->m_pRight==nullptr)
		return pTree;
	TreeNode* pResult = pTree;
	TreeNode* pTemp = MirroTree(pResult->m_pLeft);
	pResult->m_pLeft = MirroTree(pResult->m_pRight);
	pResult->m_pRight = pTemp;
	return pResult;
}

bool TreeProcess::IsSymmetry(TreeNode* pRoot) {
	return IsSymmetryCore(pRoot, pRoot);// this method is same with mine, just different appearance.
}

bool TreeProcess::IsSymmetryCore(TreeNode* pRoot1, TreeNode* pRoot2) {
	if (pRoot1 == nullptr&&pRoot2 == nullptr)
		return true;
	if (pRoot1 == nullptr || pRoot2 == nullptr)
		return false;
	return IsSymmetryCore(pRoot1->m_pLeft, pRoot2->m_pRight)
		&& IsSymmetryCore(pRoot1->m_pRight, pRoot2->m_pLeft);

}