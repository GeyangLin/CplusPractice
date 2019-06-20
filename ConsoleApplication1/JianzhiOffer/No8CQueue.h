#ifndef NO8QUEUE_H
#define NO8QUEUE_H

#include<stack>
using namespace std;

template<typename T>

class CQueue {
public:
	/*CQueue;
	~CQueue();*/

	void AppendTail(const T& node);
	T DeleteHead();
private:
	stack<T>stack1;
	stack<T>stack2;
};


#endif // !NO8QUEUE_H

