#include"Dijkstra.h"
#include<iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL); std::cout.tie(NULL);

	int V, E;
	std::vector<std::pair<int, int>> *nodes;

	std::cin >> V >> E;
	nodes = new std::vector<std::pair<int, int>>[V];

	for (int i = 0; i < E; i++) {
		int A, B, weight;
		std::cin >> A >> B >> weight;
		nodes[A].push_back({ weight, B });
		nodes[B].push_back({ weight, A });;
	}

	Dijkstra dijkstra(V, nodes);

	int* resultArray = new int[V];
	int startNode = 0;

	dijkstra.dijkstra(startNode, resultArray);

	std::cout << "- 점 " << startNode << "로부터의 거리" << std::endl;

	for (int i = 0; i < V; i++) {
		printf("%6d까지", i);
	}

	std::cout << std::endl;

	for (int i = 0; i < V; i++) {
		printf("%10d", resultArray[i]);
	}
}