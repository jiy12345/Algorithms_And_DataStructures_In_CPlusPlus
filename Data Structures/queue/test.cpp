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
	std::cout << "큐의 용량을 입력하세요: ";
	std::cin >> capacity;
	std::cout << '\n';

	Queue queue = Queue(capacity);

	while (true) {
		std::cout << "=========================================queue simulator=========================================" << '\n';
		std::cout << "enqueue X: X를 큐에 넣습니다.\t\t\t dequeue: 스택의 front에 있는 수를 제거하고 출력합니다.\n";
		std::cout << "front: 큐의 front에 있는 수를 출력합니다.\t back: 큐의 back에 있는 수를 출력합니다.\n";
		std::cout << "empty: 큐가 비어있는지 확인합니다.\t\t full: 수가 들어갈 여유공간이 있는지 확인합니다.\n";
		std::cout << "size: 큐의 현재 크기를 출력합니다.\t\t quit: 종료합니다.\n";
		std::cout << "=================================================================================================" << '\n';
		std::cout << "명령을 입력해주세요: ";
		std::string command;
		std::cin >> command;

		switch (stackCommandMap[command]) {
		case ENQUEUE:
			int X;
			std::cin >> X;
			std::cout << ((queue.enqueue(X)) ? "수가 정상적으로 삽입되었습니다." : "큐 용량이 부족하여 수가 삽입되지 못했습니다.") << '\n';
			break;
		case DEQUEUE:
			std::cout << ((queue.dequeue() == INT_MIN) ? "큐가 비어 있습니다." : "top에 있는 수가 정상적으로 제거되었습니다.") << '\n';
			break;
		case SIZE:
			std::cout << queue.size() << '\n';
			break;
		case EMPTY:
			std::cout << "큐는" << (queue.empty() ? " 비어있습니다." : " 비어있지 않습니다.") << '\n';
			break;
		case FULL:
			std::cout << "큐 용량" << (queue.full() ? "이 꽉 찼습니다." : "에 여유가 있습니다.") << '\n';
			break;
		case FRONT:
			int result;
			result = queue.front();
			std::cout << ((result == INT_MIN) ? "큐가 비어 있습니다." : std::to_string(result)) << '\n';
			break;
		case BACK:
			result = queue.back();
			std::cout << ((result == INT_MIN) ? "큐가 비어 있습니다." : std::to_string(result)) << '\n';
			break;
		case QUIT:
			std::cout << "종료합니다." << '\n';
			return;
			break;
		default:
			std::cout << "없는 명령입니다.\n";
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