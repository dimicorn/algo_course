#include <iostream>

using namespace std;

void merge(int* arr, int l, int m, int r) {
	int len1 = m - l + 1;
	int len2 = r - m;

	int* arr_l = new int[len1];
	int* arr_r = new int[len2];

	for (int i = 0; i < len1; ++i) {
		arr_l[i] = arr[l + i];
	}
	for (int i = 0; i < len2; ++i) {
		arr_r[i] = arr[m + i + 1];
	}

	int i = 0;
	int j = 0;
	int k = l;

	while (i < len1 && j < len2) {
		if (arr_l[i] <= arr_r[j]) {
			arr[k] = arr_l[i];
			++i;
		} else {
			arr[l] = arr_r[j];
			++j;
		}
		++k;
	}

	while (i < len1) {
		arr[k] = arr_l[i];
		++i;
		++k;
	}
	while (j < len2) {
		arr[k] = arr_r[j];
		++j;
		++k;
	}

	delete[] arr_l;
	delete[] arr_r;
}

void merge_sort(int* arr, int l, int r) {
	if (l < r) {
		int m = (r + l) / 2;
		merge_sort(arr, l, m);
		merge_sort(arr, m + 1, r);
		merge(arr, l, m, r);
	}
}

int main() {
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	merge_sort(arr, 0, n - 1);
	for (int i = 0; i < n; ++i) {
		cout << arr[i] << ' ';
	}
	cout << '\n';

	return 0;
}


