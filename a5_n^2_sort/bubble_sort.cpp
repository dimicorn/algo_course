#include <bits/stdc++.h>

using namespace std;

void bubble_sort(vector<int>& nums) {
	for (auto &i : nums) {
		for (auto &j : nums) {
			if (i < j) {
				swap(i, j);
			}
		}
	}
}

void print(vector<int>& nums) {
	for (auto &i : nums) {
		cout << i << ' ';
	}
	cout << '\n';
}

int main(int argc, char* argv[]) {
	vector<int> nums = {2, 8, 6, 4, 1};
	print(nums);
	bubble_sort(nums);
	print(nums);
	return 0;
}
