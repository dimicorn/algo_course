#include <bits/stdc++.h>

using namespace std;

int binary_search(vector<int>& nums, int target) {
    int l = 0;
    int r = nums.size() - 1;
    int m;
    while (l <= r) {
        m = (r + l) / 2;
        if (nums[m] == target) {
            return m;
        } else if (nums[m] < target) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    return -1;
}

int main(int argc, char* argv[]) {
    vector<int> nums = {1, 5, 6, 8, 10};
    int target1 = 1;
    int target2 = 2;

    cout << binary_search(nums, target1) << '\n';
    cout << binary_search(nums, target2) << '\n';
    return 0;
}