#include <iostream>

int fib_recursive(int n) {
	if (n == 0) {
		return 0;
	} else if (n == 1) {
		return 1;
	} else {
		return fib_recursive(n - 1) + fib_recursive(n - 2);
	}
}

int main() {
	int n;
	std::cin >> n;

	std::cout << fib_recursive(n) << '\n';

	return 0;
}
