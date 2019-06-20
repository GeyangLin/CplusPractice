#include<iostream>
//#include<algorithm>

#include"No6PrintListReversingly.h"
#include"No7ReconstructBinaryTree.h"
#include"No8CQueue.h"
#include"No11MinInRotateMatrix.h"
#include"No12HasPathBacktracking.h"
#include"No13MovingCountBackTracking.h"
#include"No16to21LogicIntegrity.h"
#include"No22To26Robust.h"

using namespace std;


int main() {

	///*No6 printlist reversingly*/
	//ListNode A(0, nullptr);
	//ListNode B(1, nullptr);
	//ListNode C(2, nullptr);
	//ListNode D(3, nullptr);
	//A.m_pNext = &B;
	//B.m_pNext = &C;
	//C.m_pNext = &D;
	//cout << "iteratively" << endl;
	//PrintListReversingly_Iteratively(&A);
	//cout << "recursingly" << endl;
	//PrintListReversingly_Recursively(&A);

	///*No7 reconstruct tree*/
	//int aPreorder[] = {1,2,4,7,3,5,6,8};
	//int aInorder[] = {4,7,2,1,5,3,8,6};
	//int nLength = 8;
	//TreeNode* root = ReconstructTree(aPreorder, aInorder, nLength);
	//PrintPreoder(root);

	/*No8 stack*/
	/*CQueue<int> Stack;
	int value = 1;
	Stack.AppendTail(value);*/

	///*No11 Min in rotate matrix*/
	//int aArray1[] = {3,4,5,1,2};
	//int aArray2[] = {1,1,1,0,1};
	//cout <<"the min number in the roate array is : " <<Min(aArray1, 5) << endl;

	/*No12 HasPathBackTracking*/

	/*No13 Moving count backtracking*/
	
	/*No16to21 Logic integrity training*/
	No16to21LogicIntegrity Integrity;
	//cout << Integrity.No16PowerWithUnsignedExponent(5, 2) << endl;
	//Integrity.No17Print1ToN(2);
	/*int array[] = {2,3,4,5,6,7,8,9,10};
	Integrity.No21ReorderOddEven(array, 9, No21ReorderOddEvenFunc);
	for (size_t i = 0; i < 9; i++)
		cout << array[i] << endl;*/


	system("pause");
	return 0;
}