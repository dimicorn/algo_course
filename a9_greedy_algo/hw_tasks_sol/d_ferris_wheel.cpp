#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int* arr = new int[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    sort(arr, arr+n);
    int l = 0, r = n - 1;
    int count = 0;
    while (l <= r) {
        if (l == r && arr[l] < x) {
            ++count;
            break;
        }
        if (arr[r] + arr[l] > x) {
            ++count;
            --r;
        } else {
            ++count;
            ++l;
            --r;
        }
    }
    cout << count << '\n';
    delete[] arr;
    return 0;
}
