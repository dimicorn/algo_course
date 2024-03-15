#include <iostream>
#include <algorithm>

using namespace std;

bool check(const int* arr, const int &n, const int &mid, const int &k) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i] / mid;
        if (sum >= k)
            return true;
    }
    return false;
}

int main() {
    int n, k;
    cin >> n >> k;
    int* arr = new int[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    int l = 1, r = *max_element(arr, arr+n);
    int ans = 0;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (check(arr, n, mid, k)) {
            l = mid + 1;
            ans = mid;
        } else {
            r = mid - 1;
        }
    }

    cout << ans << '\n';

    delete[] arr;
    return 0;
}
