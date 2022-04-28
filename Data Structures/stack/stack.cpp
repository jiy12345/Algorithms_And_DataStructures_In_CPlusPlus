#include "Stack.h"

Stack::Stack(int stackCapacty) {
	this->stackCapacity = stackCapacty;

	stackArray = new int[stackCapacity];

	topIndex = -1;
}

int Stack::push(int X) {
	if (full()) return -1;
	else {
		stackArray[++topIndex] = X;
		return 1;
	}
}

int Stack::pop() {
	if (empty()) return -1;
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
		return -1;
	}
	else {
		return stackArray[topIndex];
	}
}

bool Stack::empty() {
	return (topIndex >= stackCapacity - 1);
}

void Stack::print() {
	std::cout << '[';
	for (int i = 0; i <= topIndex; i++) std::cout << stackArray[i] << " ";
	std::cout << ']' << '\n';
}