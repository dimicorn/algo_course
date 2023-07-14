#include <iostream>

using namespace std;

int fib_iterative(int n) {
	int a0 = 0;
	int a1 = 1;

	if (n == 0) {
		return a0;
	} else if (n == 1) {
		return a1;
	} else {
		int temp;
		for (int i = 2; i <= n; ++i) {
			temp = a0 + a1;
			a0 = a1;
			a1 = temp;
		}
		return temp;
	}
}

int main() {
	int n;
	cin >> n;
	cout << fib_iterative(n) << '\n';

	return 0;
}
