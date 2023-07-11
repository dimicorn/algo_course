#include <bits/stdc++.h>

using namespace std;

pair<int, int> two_sum(vector<int>& nums, int sum) {
	int l = 0;
	int r = nums.size() - 1;
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

int main(int argc, char* argv[]) {
	vector<int> nums = {1, 3, 4, 6, 7, 10};
	int sum1 = 14;
	int sum2 = 20;
	cout << two_sum(nums, sum1).first << ' ' << two_sum(nums, sum1).second << '\n';
	cout << two_sum(nums, sum2).first << ' ' << two_sum(nums, sum2).second << '\n';
	return 0;
}
