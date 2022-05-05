#include"Dijkstra.h"
#include<iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL); std::cout.tie(NULL);

	int V, E;
	std::vector<std::vector<int>> edges;

	std::cin >> V >> E;

	for (int i = 0; i < E; i++) {
		int A, B, weight;
		std::cin >> A >> B >> weight;
		edges.push_back({ A, B, weight });;
	}

	Dijkstra dijkstra(V, edges);

	int* resultArray = new int[V];
	int startNode = 0;

	std::cout << "�������� �Է����ּ���: ";
	std::cin >> startNode;

	dijkstra.dijkstra(startNode, resultArray);

	std::cout << "- �� " << startNode << "�κ����� �Ÿ�" << std::endl;

	for (int i = 0; i < V; i++) {
		printf("%6d����", i);
	}
	std::cout << std::endl;

	for (int i = 0; i < V; i++) {
		printf("%10d", resultArray[i]);
	}
	std::cout << std::endl;
}