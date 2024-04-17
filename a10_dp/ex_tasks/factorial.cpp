#include <iostream>

using namespace std;

int fact_iterative(int n) {
	int res = 1;
	for (int i = 1; i <= n; ++i) {
		res *= i;
	}
	return res;
}

int main() {
	int n;
	cin >> n;
	cout << fact_iterative(n) << '\n';	

	return 0;
}
