#include <iostream>

using namespace std;

void selection_sort(int n, int* arr) {
	for (int i = 0; i < n - 1; ++i) {
		int min = arr[i];
		int ind = i;
		for (int j = i + 1; j < n; ++j) {
			if (min > arr[j]) {
				min = arr[j];
				ind = j;
			}
		}
		if (i != ind) {
			swap(arr[i], arr[ind]);
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
	selection_sort(n, arr);
	for (int i = 0; i < n; ++i) {
		cout << arr[i] << ' ';
	}
	cout << '\n';
	
	delete [] arr;
	return 0;
}
