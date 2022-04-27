#include<vector>

#pragma once
class UnionFind {
	int size;
	std::vector<int> parent;

public:
	UnionFind(int size);
	int getParent(int x);
	bool hasSameParent(int a, int b);
	void unionParent(int a, int b);
};

