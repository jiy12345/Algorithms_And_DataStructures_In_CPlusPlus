#include "BFS0_1.h"

BFS0_1::BFS0_1(int size, std::vector<std::pair<int, int>>* edges) {
    this->size = size;

    this->edges = new std::vector<std::pair<int, int>>[size];

    for (int i = 0; i < size; i++) {
        this->edges[i] = edges[i];
    }
}

BFS0_1::~BFS0_1() {
    delete[] edges;
}

int BFS0_1::getCost(int start, int dest) {
    std::deque<std::pair<int, int>> bfs_queue;
    bfs_queue.push_back({ start, 0 });;

    while (!bfs_queue.empty()) {
        int cur_node = bfs_queue.front().first;
        int cur_cost = bfs_queue.front().second;
        bfs_queue.pop_front();

        if (cur_node == dest) {
            return cur_cost;
        }

        for (std::pair<int, int> nextInfo : edges[cur_node]) {
            int next_node = nextInfo.first;
            int next_cost = nextInfo.second;

            if (next_cost == 1) {
                bfs_queue.push_back({ next_node, cur_cost + 1 });
            }
            else {
                bfs_queue.push_front({ next_node, cur_cost });
            }
        }
    }

    return -1;
}

int BFS0_1::getCost() {
    // 아직 시작 노드가 설정되지 않은 경우
    if (start == -1) return -1;



    return 0;
}
