#include"Kruskal.h"
#include<iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL); std::cout.tie(NULL);

	int V, E;
	std::vector<std::vector<int>> links;

	std::cin >> V >> E;

	for (int i = 0; i < E; i++) {
		int A, B, weight;
		std::cin >> A >> B >> weight;
		// 가중치를 가장 앞에 놔 가중치 기준으로 정렬되도록 함
		links.push_back({ weight, A, B });
	}

	Kruskal kruskal(V, links);

	std::cout << "최소 신장 트리의 총 가중치: " << kruskal.totalWeight();
}