#include"No11MinInRotateMatrix.h"
#include<exception>

using namespace std;

int Min(int* numbers, int length) {
	if (numbers == nullptr || length == 0)
		throw exception("the input is wrong...");
	int* pindex1 = numbers;
	int* pindex2 = numbers + length - 1;
	while (*pindex1 >= *pindex2) {
		if (pindex2 - pindex1 == 1)
			return *pindex2;
		int* pmid = (pindex2 - pindex1) / 2 + pindex1;
		if (*pindex1 == *pindex2 && *pindex1 == *pmid)
			return MinInOrder(pindex1, pindex2);
		if (*pmid >= *pindex1)
			pindex1 = pmid;
		else if (*pmid <= *pindex2)
			pindex2 = pmid;
	}
}

int MinInOrder(int* head, int* tail) {
	int min = *head;
	for (int* index = head+1; index < tail; index++)
	{
		if (*index < min)
			min = *index;
	}
	return min;
}