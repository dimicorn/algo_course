#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cin >> s;
	int* pref = new int [s.length()];
	pref[0] = 0;
	for (int i = 1; i < s.length(); ++i) {
		if (s[i] == s[i-1]) {
			pref[i] = pref[i-1]+1;
		} else {
			pref[i] = pref[i-1];
		}
	}

	int n;
	cin >> n;
	int* res = new int[n];
	int l, r;
	for (int i = 0; i < n; ++i) {
		cin >> l >> r;
		res[i] = pref[r-1] - pref[l-1];
	}

	for (int i = 0; i < n; ++i) {
		cout << res[i] << '\n';
	}

    delete[] pref;
    delete[] res;
	return 0;
}
