#pragma once
class Queue {
private:
	int queueCapacity;
	int* queueArray;
	int frontIndex;
	int backIndex;

public:
	Queue(int queueCapacity);

	bool enqueue(int X);
	int dequeue();
	int size();
	int front();
	int back();
	bool empty();
	bool full();
};

