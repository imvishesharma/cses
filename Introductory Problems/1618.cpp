#include <bits/stdc++.h>
using namespace std;

using ll = int64_t;

#define rep(i, a, b) for(int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

#define mend(i, n) " \n"[i == n-1]

#define MOD 1000'000'007

void solve() {
	int n, ans = 0;
    cin >> n;
    if (n >= 5) {
        int x = 5;
        while (x <= n) {
            int y = x;
            while (y%10 == 0) {
                y /= 10;
                ++ans;
            }
            while (y%5 == 0) {
                y /= 5;
                ++ans;
            }
            x += 5;
        }
    }
    cout << ans << "\n";
}

int main() {
	// freopen("../input.txt", "r", stdin);
	// freopen("../output.txt", "w", stdout);

	int nTestCase = 1;
	// cin >> nTestCase;
	rep(i, 0, nTestCase) {
		solve();
	}
	return 0;
}