#include "Queue.h"
#include <limits.h>

Queue::Queue(int queueCapacity) {
    this->queueCapacity = queueCapacity;

    queueArray = new int[queueCapacity];

    frontIndex = 0;
    backIndex = 0;
}

bool Queue::enqueue(int X) {
    if (full()) return false;
    else {
        queueArray[backIndex] = X;
        backIndex = (backIndex + 1) % queueCapacity;
    }
}

int Queue::dequeue() {
    if (empty()) return INT_MIN;
    else {
        int valueToReturn = queueArray[frontIndex];
        frontIndex = (frontIndex + 1) % queueCapacity;

        return valueToReturn;
    }
}

int Queue::size() {
    if (backIndex < frontIndex) return (queueCapacity - frontIndex) + backIndex;
    else                        return backIndex - frontIndex;
}

int Queue::front() {
    if (empty())    return INT_MIN;
    else            return queueArray[frontIndex];
}

int Queue::back() {
    if (empty())    return INT_MIN;
    else            return queueArray[backIndex];
}

bool Queue::empty() {
    return frontIndex == backIndex;
}

bool Queue::full() {
    return frontIndex == ((backIndex + 1) % queueCapacity);
}
