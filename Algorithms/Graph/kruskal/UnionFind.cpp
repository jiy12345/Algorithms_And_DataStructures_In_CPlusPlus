#include "UnionFind.h"

UnionFind::UnionFind(int size) {
	this->size = size;

	for (int i = 0; i < size; i++) {
		parent.push_back(i);
	}
}

int UnionFind::getParent(int x) {
	if (parent[x] == x) return x;
	else return parent[x] = getParent(parent[x]);
}

bool UnionFind::hasSameParent(int a, int b) {
	return getParent(a) == getParent(b);
}

void UnionFind::unionParent(int a, int b) {
	a = getParent(a);
	b = getParent(b);

	if (a != b) parent[b] = a;
}
