#include <vector>
#include <queue>
#include <algorithm>

#pragma once
class Dijkstra {
	int numOfNodes;
	// ������ ����ġ / ��� ��� / ���� ���
	std::vector<std::pair<int, int>> *nodes;

public:
	Dijkstra(int numOfNodes, std::vector<std::pair<int, int>> *nodes);
	void dijkstra(int startNode, int* resultArray);
};

