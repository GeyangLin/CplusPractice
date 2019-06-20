
#include"No31IsOrder.h"


bool No31IsOrder::IsOrder1(vector<int> PushOrder, vector<int> PopOrder) {
	if (PushOrder.size() == 0||PushOrder.size()!=PopOrder.size())
		return false;
	vector<int> Temp;
	int i = 0, j = 0;
	while (i < PushOrder.size()) {
		Temp.push_back(PushOrder[i++]);
		while (j < PopOrder.size() && PopOrder[j] == Temp.back()) {
			Temp.pop_back();
			j++;
		}
	}
	return Temp.empty();
}

bool No31IsOrder::IsOrder2(int* pPushOrder, int* pPopOrder) {
	// this way is in teh book, in which a temp stack is also used.
	// however, it's more complex because of pointer.
}