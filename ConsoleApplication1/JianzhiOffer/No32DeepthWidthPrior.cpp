#include"No32DeepthWidthPrior.h"

vector<int> TreeSearch::DeepthPrior(TreeNode* pRoot) {
	if (pRoot == nullptr)
		return;
	vector<TreeNode*> ThisLevel;
	vector<TreeNode*> NextLevel;
	vector<int> Result;
	ThisLevel.push_back(pRoot);
	while (ThisLevel.empty()) {
		int Sum = 0, Count = 0;
		while (ThisLevel.empty()) {
			TreeNode* Temp = ThisLevel.back();
			ThisLevel.pop_back();
			Sum += Temp->m_nValue;
			Count++;
			if (Temp->m_pLeft != nullptr)
				NextLevel.push_back(Temp->m_pLeft);
			if (Temp->m_pRight != nullptr)
				NextLevel.push_back(Temp->m_pRight);
		ThisLevel = NextLevel;
		NextLevel.clear();
		Result.push_back(Sum / Count);
		}
	}
	return Result;
}
