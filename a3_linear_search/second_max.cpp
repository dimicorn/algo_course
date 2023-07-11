#include <bits/stdc++.h>

using namespace std;

// or make max and smax minimum of nums
int second_max(vector<int>& nums) {
	int max = INT_MIN;
	int smax = INT_MIN;
	if (nums.size() == 1) {
		return -1;
	}
	for (auto &i : nums) {
		if (i > max) {
			smax = max;
			max = i;
		} else if (i > smax) {
			smax = i;
		}
	}
	return smax;
}

int main(int argc, char* argv[]) {
	vector<int> nums = {3, 6, 1, 9, 11, 5};
	cout << second_max(nums) << '\n';
	
	return 0;
}
