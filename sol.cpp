#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		// if n == 1, just print 9
		if (n == 1) {
			cout << 9 << '\n';
			continue;
		}
		// note: look at the image in the repository for better understanding
		// think that all digits are showing '8'
		for (int i = 1; i <= n; i++) {
			// if i == 1, print 9
			if (i == 1) {
				cout << 9;
			} else if (i == 2) {
				// if i == 2, print 8
				cout << 8;
			} else {
				// subtract i - 2 to get the number of seconds paused
				// add that value to 8 and use mod 10 so that the digits repeat from 0 to 9
				cout << ((i - 2) + 8) % 10;
			}
		}
		cout << '\n';
	}
	return 0;
}
