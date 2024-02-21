#include <iostream>

using namespace std;

void print(int n, int* arr) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << ' ';
    }
	cout << '\n';
}

int partition(int l, int r, int* arr) {
	int pivot = arr[r];
	int i = l;
	for (int j = l; j < r; ++j) {
		if (arr[j] <= pivot) {
			swap(arr[i], arr[j]);
			++i;
		}
	}
	swap(arr[i], arr[r]);
	return i;
}

void quick_sort(int l, int r, int* arr) {
	if (l >= r || l < 0) {
		return;
	}
	int ind = partition(l, r, arr);
	quick_sort(l, ind-1, arr);
	quick_sort(ind+1, r, arr);
}

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    quick_sort(0, n - 1, arr);
	print(n, arr);

	delete [] arr;
    return 0;
}
