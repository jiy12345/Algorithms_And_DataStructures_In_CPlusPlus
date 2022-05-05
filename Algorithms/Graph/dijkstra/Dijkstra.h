#include <vector>
#include <queue>
#include <algorithm>

#pragma once
class Dijkstra {
	int numOfNodes;
	// 간선의 가중치 / 출발 노드 / 도착 노드
	std::vector<std::pair<int, int>> *nodes;

public:
	Dijkstra(int numOfNodes, std::vector<std::pair<int, int>> *nodes);
	void dijkstra(int startNode, int* resultArray);
};

