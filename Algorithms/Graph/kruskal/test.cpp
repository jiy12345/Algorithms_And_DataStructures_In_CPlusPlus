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
		// ����ġ�� ���� �տ� �� ����ġ �������� ���ĵǵ��� ��
		links.push_back({ weight, A, B });
	}

	Kruskal kruskal(V, links);

	std::cout << "�ּ� ���� Ʈ���� �� ����ġ: " << kruskal.totalWeight();
}