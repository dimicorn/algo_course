#include <iostream>
#include <algorithm>
#define ll long long

using namespace std;

bool check(const ll* arr, const int &n, const ll &mid, const ll &t) {
    ll sum = 0;
    for (int i = 0; i <n; ++i) {
        sum += mid / arr[i];
        if (sum >= t)
            return true;
    }
    return false;
}

int main() {
    int n;
    ll t;
    cin >> n >> t;
    ll* arr = new ll[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    ll max_elem = *max_element(arr, arr+n);
    ll l = 1, r = t * max_elem;
    ll ans;
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        if (check(arr, n, mid, t)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << ans << '\n';

    delete[] arr;
    return 0;
}
