#include"Minstack.h"
#include<iostream>
#include<algorithm>

using namespace std;


void main() {

	Minstack stack;// has no '()'
	while (1)
	{
		int x;
		cout << "plese input a number: " << endl;
		cin >> x;
		stack.push(x);
		//cout << min(2, 5);
		cout << "the top vlaue is : " << stack.top() << endl << "the minvalue is : " << stack.getMin()<<endl << endl;
	}
	
}