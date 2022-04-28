#include "Stack.h"

Stack::Stack(int stackCapacty) {
	this->stackCapacity = stackCapacty;

	stackArray = new int[stackCapacity];

	topIndex = -1;
}

bool Stack::push(int X) {
	if (full()) return false;
	else {
		stackArray[++topIndex] = X;
		return true;
	}
}

int Stack::pop() {
	if (empty()) return INT_MIN;
	else		 return stackArray[topIndex--];
}

int Stack::size() {
	return topIndex + 1;
}

bool Stack::empty() {
	return (topIndex == -1);
}

int Stack::top() {
	if (empty()) {
		return INT_MIN;
	}
	else {
		return stackArray[topIndex];
	}
}

bool Stack::full() {
	return (topIndex >= stackCapacity - 1);
}