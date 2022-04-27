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
	
	std::cout << "0�� 4�� ����" << ((unionFind.hasSameParent(0, 4)) ? " �Ǿ��ֽ��ϴ�." : " �Ǿ����� �ʽ��ϴ�.") << std::endl;
	std::cout << "0�� 5�� ����" << ((unionFind.hasSameParent(0, 5)) ? " �Ǿ��ֽ��ϴ�." : " �Ǿ����� �ʽ��ϴ�.") << std::endl;
	std::cout << "4�� 9�� ����" << ((unionFind.hasSameParent(4, 9)) ? " �Ǿ��ֽ��ϴ�." : " �Ǿ����� �ʽ��ϴ�.") << std::endl;
	std::cout << "5�� 9�� ����" << ((unionFind.hasSameParent(5, 9)) ? " �Ǿ��ֽ��ϴ�." : " �Ǿ����� �ʽ��ϴ�.") << std::endl;
}