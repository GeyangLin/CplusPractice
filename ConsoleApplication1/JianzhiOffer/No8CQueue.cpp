#include"No8CQueue.h"


template<typename T> void CQueue<T>::AppendTail(const T& element){
	this->stack1.push(element);
}

template<typename T> T CQueue<T>::DeleteHead() {
	// dosen't matter...
}