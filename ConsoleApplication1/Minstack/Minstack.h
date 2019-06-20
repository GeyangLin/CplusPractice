//#pragma once
#ifndef MINSTACK_H
#define MINSTCAK_H

#include<vector>
using namespace std;

class Minstack{
public:
	Minstack();//has "()"
	int getMin();
	void pop();
	int top();
	void push(int x);
private:
	vector<vector<int>> stack;
};

#endif // !MINSTACK_H



