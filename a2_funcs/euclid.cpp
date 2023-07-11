#include <iostream>

int gcd_recursive(int a, int b) {
	if (b > a) {
		int temp = b;
		b = a;
		a = temp;
		// or use std::swap(a, b)
	}

	if (a == 0 && b == 0) {
		return 0;
	} else if (a == 0) {
		return b;
	} else if (b == 0) {
		return a;
	}

	return gcd_recursive(b, a % b);
}

int main() {
	int a, b;
	std::cin >> a >> b;

	std::cout << gcd_recursive(a, b) << '\n';

	return 0;
}
