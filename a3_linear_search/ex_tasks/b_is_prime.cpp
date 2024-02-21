#include <iostream>

using namespace std;

bool is_prime(int x) {
	if (x == 1) {
		return false;
	}

	for (int i = 2; i * i <= x; ++i) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int x;
	cin >> x;

	if (is_prime(x)) {
		cout << x << " is a prime number\n";
	} else {
		cout << x << " is not a prime number\n";
	}

	return 0;
}
