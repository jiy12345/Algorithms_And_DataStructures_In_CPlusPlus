#include"UnionFind.h"
#include<queue>

#pragma once
class Kruskal {
	int size;
	// 간선의 가중치 / 출발 노드 / 도착 노드
	std::priority_queue<std::vector<int>, std::vector<std::vector<int>>, std::greater<std::vector<int>>> links;
	UnionFind *unionFind;

public:
	Kruskal(int size, std::vector<std::vector<int>>links);
	int totalWeight();
};

