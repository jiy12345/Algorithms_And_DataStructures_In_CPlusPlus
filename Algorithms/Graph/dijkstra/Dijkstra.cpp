#include "Dijkstra.h"

Dijkstra::Dijkstra(int numOfNodes, std::vector<std::pair<int, int>>* nodes) {
	this->numOfNodes = numOfNodes;

	nodes = new std::vector<std::pair<int, int>>[numOfNodes]();

	for (int i = 0; i < numOfNodes; i++) {
		for (std::pair<int, int> curEdge : nodes[i]) {
			this->nodes[i].push_back(curEdge);
		}
	}
}

void Dijkstra::dijkstra(int startNode, int* distanceFromStart) {
	std::fill(&distanceFromStart[0], &distanceFromStart[numOfNodes], INT_MAX);

    std::priority_queue <std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> dijkstra_queue;
    dijkstra_queue.push({ 0, startNode });
    distanceFromStart[startNode] = 0;

    while (!dijkstra_queue.empty()) {
        int cur_cost = dijkstra_queue.top().first;
        int cur_node = dijkstra_queue.top().second;
        dijkstra_queue.pop();

        for (int i = 0; i < nodes[cur_node].size(); i++) {
            int next_cost = nodes[cur_node][i].first;
            int next_node = nodes[cur_node][i].second;

            if (distanceFromStart[next_node] > cur_cost + next_cost) {
                distanceFromStart[next_node] = cur_cost + next_cost;
                dijkstra_queue.push({ distanceFromStart[next_node], next_node });
            }
        }
    }
}
