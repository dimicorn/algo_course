#include <iostream>

using namespace std;

int main() {
	int n, m;
	pair<int, int> p;

	cin >> n >> m;

	int* arr = new int[n];
	int* prefix = new int[n+1];
	pair<int, int>* ind = new pair<int, int>[m];

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
	for (int i = 0; i < m; ++i) {
		int sum = prefix[ind[i].second] - prefix[ind[i].first];
		cout << sum << '\n';
	}
	
	delete [] arr;
	delete [] prefix;
	delete [] ind;
	return 0;
}
