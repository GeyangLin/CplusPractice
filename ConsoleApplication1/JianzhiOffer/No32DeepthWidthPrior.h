#ifndef NO32DEEPTHWIDTHPRIOR_H
#define NO32DEEPTHWIDTHPRIOR_H

#include<vector>
using namespace std;

struct TreeNode
{
	int m_nValue;
	TreeNode* m_pLeft;
	TreeNode* m_pRight;
};

class TreeSearch {
public:
	vector<int> DeepthPrior(TreeNode* pRoot);
public:
	vector<int> WidthPrior(TreeNode* pRoot);
};

#endif // !NO32DEEPTHWIDTHPRIOR_H

