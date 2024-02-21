#include <iostream>

using namespace std;

void bubble_sort(int n, int* arr) {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (arr[i] < arr[j]) {
				swap(arr[i], arr[j]);
			}
		}
	}
}

int main() {
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	bubble_sort(n, arr);
	for (int i = 0; i < n; ++i) {
		cout << arr[i] << ' ';
	}
	cout << '\n';

	delete [] arr;
	return 0;
}
