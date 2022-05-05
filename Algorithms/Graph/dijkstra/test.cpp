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

	std::cout << "시작점을 입력해주세요: ";
	std::cin >> startNode;

	dijkstra.dijkstra(startNode, resultArray);

	std::cout << "- 점 " << startNode << "로부터의 거리" << std::endl;

	for (int i = 0; i < V; i++) {
		printf("%6d까지", i);
	}
	std::cout << std::endl;

	for (int i = 0; i < V; i++) {
		printf("%10d", resultArray[i]);
	}
	std::cout << std::endl;
}