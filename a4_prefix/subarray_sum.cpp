#include <iostream>

using namespace std;

int main() {
	int n, m;
	pair<int, int> p;
	cin >> n >> m;
	int arr[n], prefix[n+1];
	pair<int, int> ind[m];
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	for (int i = 0; i < m; ++i) {
		cin >> p.first >> p.second;
		ind[i] = p;
	}
	prefix[0] = 0;
	for (int i = 1; i <= n; ++i) {
		prefix[i] = prefix[i-1] + arr[i-1];
	}
	for (auto &p : ind) {
		int sum = prefix[p.second] - prefix[p.first];
		cout << sum << '\n';
	}

	return 0;
}
