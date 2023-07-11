#include <iostream>

int main() {
	char x;

	std::cin >> x;

	if ('0' <= x && x <= '9') {
		std::cout << x << " is a digit\n";
	} else if ('a' <= x && x <= 'z' || 'A' <= x && x <= 'Z') {
		std::cout << x << " is a symbol\n";
	} else {
		std::cout << "Input Error!\n";
	}

	return 0;
}
