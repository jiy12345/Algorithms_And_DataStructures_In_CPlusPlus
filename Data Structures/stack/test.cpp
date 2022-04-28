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
	std::cout << "������ �뷮�� �Է��ϼ���: ";
	std::cin >> capacity;

	Stack stack = Stack(capacity);



	while(true) {
		std::cout << "=========================================stack simulator=========================================" << '\n';
		std::cout << "push X: X�� ���ÿ� Ǫ���մϴ�.\t\t\t pop: ������ top�� �ִ� ���� �����ϰ� ����մϴ�.\n";
		std::cout << "size: ������ ���� ũ�⸦ ����մϴ�.\t\t top: ������ top�� �ִ� ���� ����մϴ�.\n";
		std::cout << "empty: ������ ����ִ��� Ȯ���մϴ�.\t\t full : ���� �� ���������� �ִ��� Ȯ���մϴ�.\n";
		std::cout << "print: ���� ���ÿ� �ִ� ������ ����մϴ�.\t quit: �����մϴ�.\n";
		std::cout << "=================================================================================================" << '\n';
		std::cout << "����� �Է����ּ���: ";
		std::string command;
		std::cin >> command;

		switch (stackCommandMap[command]) {
		case PUSH:
			int X;
			std::cin >> X;
			std::cout << ((stack.push(X)) ? "���� ���������� ���ԵǾ����ϴ�." : "������ �뷮�� �����Ͽ� ���� ���Ե��� ���߽��ϴ�.") << '\n';
			break;
		case POP:
			std::cout << ((stack.pop() == INT_MIN) ? "������ ��� �ֽ��ϴ�." : "top�� �ִ� ���� ���������� ���ŵǾ����ϴ�.") << '\n';
			break;
		case SIZE:
			std::cout << stack.size() << '\n';
			break;
		case EMPTY:
			std::cout << "������" << (stack.empty() ? " ����ֽ��ϴ�.": " ������� �ʽ��ϴ�.") << '\n';
			break;
		case FULL:
			std::cout << "���ÿ뷮" << (stack.full() ? "�� �� á���ϴ�." : "�� ������ �ֽ��ϴ�.") << '\n';
			break;
		case TOP:
			int result;
			result = stack.top();
			std::cout << ((result == INT_MIN) ? "������ ��� �ֽ��ϴ�." : std::to_string(result)) << '\n';
			break;
		case PRINT:
			stack.print();
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