#include<iostream>
#include"UnionFind.h";

int main() {
	UnionFind unionFind(10);

	unionFind.unionParent(0, 1);
	unionFind.unionParent(1, 2);
	unionFind.unionParent(2, 3);
	unionFind.unionParent(3, 4);
	unionFind.unionParent(5, 6);
	unionFind.unionParent(6, 7);
	unionFind.unionParent(7, 8);
	unionFind.unionParent(8, 9);
	
	std::cout << "0과 4가 연결" << ((unionFind.hasSameParent(0, 4)) ? " 되어있습니다." : " 되어있지 않습니다.") << std::endl;
	std::cout << "0과 5가 연결" << ((unionFind.hasSameParent(0, 5)) ? " 되어있습니다." : " 되어있지 않습니다.") << std::endl;
	std::cout << "4와 9가 연결" << ((unionFind.hasSameParent(4, 9)) ? " 되어있습니다." : " 되어있지 않습니다.") << std::endl;
	std::cout << "5와 9가 연결" << ((unionFind.hasSameParent(5, 9)) ? " 되어있습니다." : " 되어있지 않습니다.") << std::endl;
}