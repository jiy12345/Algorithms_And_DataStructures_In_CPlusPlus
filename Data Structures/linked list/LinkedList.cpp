#include "LinkedList.h"

template<typename T>
inline LinkedList<T>::LinkedList() {
	head = nullptr;
	tail = nullptr;
	size = 0;
}

template<typename T>
inline bool LinkedList<T>::empty() {
	return (head == nullptr && tail == nullptr);
}

template<typename T>
inline size_t LinkedList<T>::size() {
	return size;
}

template<typename T>
inline void LinkedList<T>::clear() {
	Node<T> *curNode = head;
	while (true) {
		curNode = head->nextNode;
	}
}

template<typename T>
inline bool LinkedList<T>::contains(int value) {
	Node<T>* curNode = head;
	while (true) {
		curNode = head->nextNode;

		if (curNode->data = value) return true;

		if (curNode == tail) break;
	}

	return false;
}

template<typename T>
Node<T>* LinkedList<T>::begin() {
	return head;
}

template<typename T>
Node<T>* LinkedList<T>::end() {
	return tail;
}

template<typename T>
void LinkedList<T>::push_front(int element) {
	Node* nextNode = head;
	head = new Node(element);
	head->nextNode = nextNode;

	size++;
}

template<typename T>
void LinkedList<T>::push_back(int element) {
	tail->nextNode = new Node(element);
	tail = tail->nextNode;

	size++;
}

template<typename T>
bool LinkedList<T>::insert(int index, int element) {
	if (index >= size) return false;

	Node* prevNode = head;
	Node* curNode = new Node(element);
	Node* nextNode = head->nextNode;
	
	for (int i = 0; i < index - 1; i++) {
		prevNode = prevNode->nextNode;
		nextNode = nextNode->nextNode;
	}

	prevNode->nextNode = curNode;
	curNode->nextNode = nextNode;

	size++;
}

template<typename T>
void LinkedList<T>::pop_front(int element) {
	if (empty()) return;

	Node* nodeToDelete = head;
	head = head->nextNode;
	delete(nodeToDelete);

	size--;
}

template<typename T>
void LinkedList<T>::pop_back(int element) {
	if (empty()) return;

	delete(tail);
	tail = nullptr;

	size--;
}

template<typename T>
bool LinkedList<T>::erase(int index) {
	if (index >= size) return false;
	
	Node* prevNode = head;
	Node* curNode = head->nextNode;

	for (int i = 0; i < index - 1; i++) {
		prevNode = prevNode->nextNode;
		curNode = curNode->nextNode;
	}

	prevNode->nextNode = curNode;
	delete(curNode);
	curNode = nullptr;

	size--;
}

template<typename T>
T LinkedList<T>::front() {
	return head->data;
}

template<typename T>
T LinkedList<T>::back() {
	return tail->data;
}

template<typename T>
void LinkedList<T>::print() {
	Node* curNode = head;

	while(curNode != nullptr) {
		cout << curNode << " ";
		curNode = curNode->nextNode;
	}

	cout << endl;
}
