#include <iostream>
#define ld long double

using namespace std;

ld cubic(const ld &a, const ld &b, const ld &c, const ld &d, const ld &x) {
    return d + x * (c + x * (b + x * a));
}

ld bin_search(ld a, ld b, ld c, ld d) {
    ld l = -2000, r = 2000;
    if (a < 0) {
        a = -a;
        b = -b;
        c = -c;
        d = -d;
    }
    while (r - l > 1e-10) {
        ld mid = (r + l) * 0.5;
        ld f = cubic(a, b, c, d, mid);
        if (f >= 0)
            r = mid;
        else
            l = mid;
    }
    return r;
}

int main() {
    ld a, b, c, d;
    cin >> a >> b >> c >> d;
    ld res = bin_search(a, b, c, d);
    cout << res << '\n';
    return 0;
}
