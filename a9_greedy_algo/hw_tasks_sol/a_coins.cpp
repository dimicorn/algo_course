#include <iostream>

using namespace std;

int main() {
    int n, s;
    cin >> n >> s;
    int count = 0;
    int i = n;
    while (s > 0) {
        if (s >= i) {
            s -= i;
            ++count;
        } else {
            --i;
        }
    }

    cout << count << '\n';
    return 0;
}
