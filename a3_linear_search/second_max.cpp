#include <iostream>

using namespace std;

int second_max(int n, int* nums) {
	int max = nums[0];
	int smax = nums[0];
	if (n == 1) {
		return -1;
	}
	for (int i = 0; i < n; ++i) {
		if (nums[i] > max) {
			smax = max;
			max = nums[i];
		} else if (nums[i] > smax) {
			smax = nums[i];
		}
	}
	return smax;
}

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	cout << second_max(n, arr) << '\n';
	
	return 0;
}
