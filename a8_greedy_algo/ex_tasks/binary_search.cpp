#include <iostream>

using namespace std;

int binary_search(int n, int* arr, int target) {
    int l = 0;
    int r = n - 1;
    int m;
    while (l <= r) {
        m = (r + l) / 2;
        if (arr[m] == target) {
            return m;
        } else if (arr[m] < target) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    return -1;
}

int main() {
    int n, target;
    cin >> n >> target;
    int* arr = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << binary_search(n, arr, target) << '\n';

    delete [] arr;
    return 0;
}