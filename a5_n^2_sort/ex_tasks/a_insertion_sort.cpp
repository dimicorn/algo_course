#include <iostream>

using namespace std;

void insertion_sort(int n, int* arr) {
	int i = 1;
	while (i < n) {
		int j = i;
		while (j > 0 && arr[j-1] > arr[j]) {
			swap(arr[j-1], arr[j]);
			--j;
		}
		++i;
	}
}

int main() {
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	insertion_sort(n, arr);
	for (int i = 0; i < n; ++i) {
		cout << arr[i] << ' ';
	}
	cout << '\n';

	delete [] arr;
	return 0;
}
