#include <iostream>

int fact_recursive(int n) {
	if (n == 0) {
		return 1;
	} else if (n == 1) {
		return 1;
	} else {
		return n * fact_recursive(n - 1);
	}
}

int main() {
	int n;
	std::cin >> n;

	std::cout << fact_recursive(n) << '\n';

	return 0;
}
