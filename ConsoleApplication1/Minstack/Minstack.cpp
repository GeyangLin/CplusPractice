

#include "Minstack.h"
#include <iostream>
#include <vector>

using namespace std;

Minstack::Minstack() {
	cout<< "creat a stack" <<endl;
}

void Minstack::pop() {
	this->stack.pop_back();
}

int Minstack::top() {
	if (this->stack.size() == 0)
	{
		return 0;
	}
	else
	{
		return this->stack[this->stack.size() - 1][0];
	}
}

void Minstack::push(int x) {
	if (this->stack.size()==0 || this->getMin()>x)
	{
		int arr[2] = {x, x};
		vector<int>temp(arr, arr + 2);
		this->stack.push_back(temp);
	}
	else
	{
		int arr[2] = {x, this->getMin()};
		vector<int>temp(arr, arr + 2);
		this->stack.push_back(temp);
	}
}

int Minstack::getMin() {
	if (this->stack.size() == 0)
	{
		return 0;
	}
	else
	{
		return this->stack[this->stack.size() - 1][1];
	}
}