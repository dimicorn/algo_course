#include <iostream>

using namespace std;

pair<int, int> two_sum(int n, int* nums, int sum) {
	int l = 0;
	int r = n - 1;
	while (l < r) {
		if (nums[l] + nums[r] == sum) {
			return make_pair(l, r);
		} else if (nums[l] + nums[r] < sum) {
			++l;
		} else {
			--r;
		}
	}
	return make_pair(-1, -1);
}

int main() {
	int n, sum;
	cin >> n >> sum;
	int arr[n];
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	pair<int, int> ans = two_sum(n, arr, sum);
	cout << ans.first << ' ' << ans.second << '\n';
	
	return 0;
}
