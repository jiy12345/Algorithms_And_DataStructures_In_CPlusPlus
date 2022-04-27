#include "Kruskal.h"

Kruskal::Kruskal(int size, std::vector<std::vector<int>> links) {
	this->size = size;
	unionFind = new UnionFind(size);

	for (int i = 0; i < this->size; i++) {
		this->links.push(links[i]);
	}
}

int Kruskal::totalWeight() {
	int totalWeight = 0;
	while (!links.empty()) {
		std::vector<int> cur_link(links.top());
		links.pop();
		if (unionFind->hasSameParent(cur_link[1], cur_link[2]) == false) {
			unionFind->unionParent(cur_link[1], cur_link[2]);
			totalWeight += cur_link[0];
		}
	}
}
