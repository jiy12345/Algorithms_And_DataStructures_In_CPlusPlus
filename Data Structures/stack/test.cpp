#include<iostream>
#include<map>
#include<string>
#include"Stack.h"

enum STACK_COMMAND { QUIT = -1, PUSH = 1, POP, SIZE, EMPTY, FULL, TOP, PRINT };
std::map<std::string, int> stackCommandMap = {
	{"quit", QUIT},
	{"push", PUSH},
	{"pop", POP},
	{"size", SIZE},
	{"empty", EMPTY},
	{"full", FULL},
	{"top", TOP},
	{"print", PRINT},
};

void stackSimulator() {
	int capacity;
	std::cout << "스택의 용량을 입력하세요: ";
	std::cin >> capacity;

	Stack stack = Stack(capacity);



	while(true) {
		std::cout << "=========================================stack simulator=========================================" << '\n';
		std::cout << "push X: X를 스택에 푸시합니다.\t\t\t pop: 스택의 top에 있는 수를 제거하고 출력합니다.\n";
		std::cout << "size: 스택의 현재 크기를 출력합니다.\t\t top: 스택의 top에 있는 수를 출력합니다.\n";
		std::cout << "empty: 스택이 비어있는지 확인합니다.\t\t full : 수가 들어갈 여유공간이 있는지 확인합니다.\n";
		std::cout << "print: 현재 스택에 있는 수들을 출력합니다.\t quit: 종료합니다.\n";
		std::cout << "=================================================================================================" << '\n';
		std::cout << "명령을 입력해주세요: ";
		std::string command;
		std::cin >> command;

		switch (stackCommandMap[command]) {
		case PUSH:
			int X;
			std::cin >> X;
			std::cout << ((stack.push(X)) ? "수가 정상적으로 삽입되었습니다." : "스택의 용량이 부족하여 수가 삽입되지 못했습니다.") << '\n';
			break;
		case POP:
			std::cout << ((stack.pop() == INT_MIN) ? "스택이 비어 있습니다." : "top에 있는 수가 정상적으로 제거되었습니다.") << '\n';
			break;
		case SIZE:
			std::cout << stack.size() << '\n';
			break;
		case EMPTY:
			std::cout << "스택은" << (stack.empty() ? " 비어있습니다.": " 비어있지 않습니다.") << '\n';
			break;
		case FULL:
			std::cout << "스택용량" << (stack.full() ? "이 꽉 찼습니다." : "에 여유가 있습니다.") << '\n';
			break;
		case TOP:
			int result;
			result = stack.top();
			std::cout << ((result == INT_MIN) ? "스택이 비어 있습니다." : std::to_string(result)) << '\n';
			break;
		case PRINT:
			stack.print();
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