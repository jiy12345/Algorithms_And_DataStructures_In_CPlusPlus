#include<iostream>
#include"BFS0_1.h"
using namespace std;

int main() {
	int size = 5;
	vector<pair<int, int>> *edges = new vector<pair<int, int>>[size];

	edges[0].push_back({ 1, 1 });
	edges[0].push_back({ 2, 1 });
	edges[0].push_back({ 3, 0 });
	edges[1].push_back({ 0, 1 });
	edges[1].push_back({ 0, 1 });
	edges[1].push_back({ 4, 0 });
	edges[2].push_back({ 0, 1 });
	edges[2].push_back({ 3, 0 });
	edges[3].push_back({ 0, 0 });
	edges[3].push_back({ 2, 0 });
	edges[3].push_back({ 4, 0 });
	edges[4].push_back({ 1, 0 });
	edges[4].push_back({ 3, 0 });

	BFS0_1 bfs0_1(size, edges);

	cout << "0에서 1까지: " << bfs0_1.getCost(0, 1) << endl;
	cout << "0에서 2까지: " << bfs0_1.getCost(0, 2) << endl;
	cout << "0에서 3까지: " << bfs0_1.getCost(0, 3) << endl;
	cout << "0에서 4까지: " << bfs0_1.getCost(0, 4) << endl;
	cout << "2에서 4까지: " << bfs0_1.getCost(2, 4) << endl;

	return 0;
}