#include<iostream>
#include<map>
#include<string>
#include"Queue.h"

enum QUEUE_COMMAND { QUIT = -1, ENQUEUE = 1, DEQUEUE, SIZE, EMPTY, FULL, FRONT, BACK };
std::map<std::string, int> stackCommandMap = {
	{"quit", QUIT},
	{"enqueue", ENQUEUE},
	{"dequeue", DEQUEUE},
	{"size", SIZE},
	{"empty", EMPTY},
	{"full", FULL},
	{"front", FRONT},
	{"back", BACK},
};

void stackSimulator() {
	int capacity;
	std::cout << "ť�� �뷮�� �Է��ϼ���: ";
	std::cin >> capacity;
	std::cout << '\n';

	Queue queue = Queue(capacity);

	while (true) {
		std::cout << "=========================================queue simulator=========================================" << '\n';
		std::cout << "enqueue X: X�� ť�� �ֽ��ϴ�.\t\t\t dequeue: ������ front�� �ִ� ���� �����ϰ� ����մϴ�.\n";
		std::cout << "front: ť�� front�� �ִ� ���� ����մϴ�.\t back: ť�� back�� �ִ� ���� ����մϴ�.\n";
		std::cout << "empty: ť�� ����ִ��� Ȯ���մϴ�.\t\t full: ���� �� ���������� �ִ��� Ȯ���մϴ�.\n";
		std::cout << "size: ť�� ���� ũ�⸦ ����մϴ�.\t\t quit: �����մϴ�.\n";
		std::cout << "=================================================================================================" << '\n';
		std::cout << "����� �Է����ּ���: ";
		std::string command;
		std::cin >> command;

		switch (stackCommandMap[command]) {
		case ENQUEUE:
			int X;
			std::cin >> X;
			std::cout << ((queue.enqueue(X)) ? "���� ���������� ���ԵǾ����ϴ�." : "ť �뷮�� �����Ͽ� ���� ���Ե��� ���߽��ϴ�.") << '\n';
			break;
		case DEQUEUE:
			std::cout << ((queue.dequeue() == INT_MIN) ? "ť�� ��� �ֽ��ϴ�." : "top�� �ִ� ���� ���������� ���ŵǾ����ϴ�.") << '\n';
			break;
		case SIZE:
			std::cout << queue.size() << '\n';
			break;
		case EMPTY:
			std::cout << "ť��" << (queue.empty() ? " ����ֽ��ϴ�." : " ������� �ʽ��ϴ�.") << '\n';
			break;
		case FULL:
			std::cout << "ť �뷮" << (queue.full() ? "�� �� á���ϴ�." : "�� ������ �ֽ��ϴ�.") << '\n';
			break;
		case FRONT:
			int result;
			result = queue.front();
			std::cout << ((result == INT_MIN) ? "ť�� ��� �ֽ��ϴ�." : std::to_string(result)) << '\n';
			break;
		case BACK:
			result = queue.back();
			std::cout << ((result == INT_MIN) ? "ť�� ��� �ֽ��ϴ�." : std::to_string(result)) << '\n';
			break;
		case QUIT:
			std::cout << "�����մϴ�." << '\n';
			return;
			break;
		default:
			std::cout << "���� ����Դϴ�.\n";
			break;
		}

		std::cout << '\n';
	}
}

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL); std::cout.tie(NULL);

	stackSimulator();

	return 0;
}