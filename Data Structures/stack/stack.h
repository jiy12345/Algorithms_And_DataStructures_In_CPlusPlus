#include<iostream>

class Stack {
private:
	int stackCapacity;
	int *stackArray;
	int topIndex;

public:
	Stack(int stackCapacty);

	bool push(int X);
	int pop();
	int size();
	bool empty();
	int top();
	bool full();
	void print();
};