#include<vector>
#include<deque>

#pragma once
class BFS0_1 {
	int size;
	//			���� ���, ����ġ(0 or 1)
	std::vector<std::pair<int, int>>* edges;

public:
	BFS0_1(int size, std::vector<std::pair<int, int>>* edges);
	~BFS0_1();
	int getCost(int start, int dest);
};

