#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int lower_bound(const long long* arr, const int &n, const long long &x) {
    int l =  0, r = n, mid;
    while(l < r) {
        mid = (r + l) / 2;
        if (x <= arr[mid])
            r = mid;
        else
            l = mid + 1;
    }
    return l;
}

int main() {
    int n, m;
    cin >> n >> m;
    long long* arr = new long long[n];
    long long* brr = new long long[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    for (int i = 0; i < m; ++i)
        cin >> brr[i];
    long long res;
    for (int i = 0; i < m; ++i) {
        if (brr[i] <= arr[0]) {
            res = arr[0];
        } else if (brr[i] >= arr[n-1]) {
            res = arr[n-1];
        } else {
            bool bs = binary_search(arr, arr+n, brr[i]); 
            if (bs) {
                res = brr[i];
            } else {
                int lb = lower_bound(arr, n, brr[i]);
                if (lb - 1 >= 0 && abs(arr[lb-1] - brr[i]) <= abs(arr[lb] - brr[i])) {
                    res = arr[lb-1];
                } else {
                    res = arr[lb];
                }
            }
        }
        cout << res << ' ';
    }
    cout << '\n';
    delete[] arr;
    delete[] brr;
    return 0;
}
