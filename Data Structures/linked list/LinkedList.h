#pragma once

template <typename T>
struct Node {
	T data;
	Node* nextNode;

	Node(int data) {
		this->data = data;
		nextNode = nullptr;
	}
};

template <typename T>
class LinkedList {
	Node<T>* head;
	Node<T>* tail;
	size_t size;
public:
	LinkedList<T>();
	bool empty();
	size_t size();
	void clear();
	bool contains(int value);

	Node<T>* begin();
	Node<T>* end();

	void push_front(int element);
	void push_back(int element);
	bool insert(int index, int element);

	void pop_front(int element);
	void pop_back(int element);
	bool erase(int index);

	T front();
	T back();

	void print();
};