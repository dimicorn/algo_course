#include <iostream>

int main() {
	int x;

	std::cin >> x;

	if (x % 2 == 0) {
		std::cout << x << " is an even number\n";
	} else {
		std::cout << x << " is an odd number\n";
	}

	// Same thing using ternary operator
	/*
	x % 2 == 0 ? std::cout << x << " is an even number\n" : 
	std::cout << x << " is an odd number\n";
	*/

	return 0;
}
