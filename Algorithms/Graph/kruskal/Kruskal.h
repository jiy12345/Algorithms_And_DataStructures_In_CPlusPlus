#include"UnionFind.h"
#include<queue>

#pragma once
class Kruskal {
	int size;
	// ������ ����ġ / ��� ��� / ���� ���
	std::priority_queue<std::vector<int>, std::vector<std::vector<int>>, std::greater<std::vector<int>>> links;
	UnionFind *unionFind;

public:
	Kruskal(int size, std::vector<std::vector<int>>links);
	int totalWeight();
};

