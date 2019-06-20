#ifndef NO2728TREE_H
#define NO2728TREE_H

struct TreeNode
{
	int m_nValue;
	TreeNode* m_pLeft;
	TreeNode* m_pRight;
};

class TreeProcess {
public:
	TreeNode* MirroTree(TreeNode* pTree);//No27
public:
	bool IsSymmetry(TreeNode* pRoot);//No28
	bool IsSymmetryCore(TreeNode* pRoot1, TreeNode* pRoot2);

};


#endif // !NO2728TREE_H

