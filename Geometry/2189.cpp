#include <bits/stdc++.h>
using namespace std;

using ii = int32_t;
using ll = int64_t;

#define rep(i, a, b) for(ii i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

#define mend(i, n) " \n"[i == n-1]

void solve();

ii main() {
	// freopen("../input.txt", "r", stdin);
	// freopen("../output.txt", "w", stdout);

	int nTestCase = 1;
	cin >> nTestCase;
	rep(i, 0, nTestCase) {
		solve();
	}
	return 0;
}

void solve() {
	ll x[3], y[3];
    rep(i, 0, 3) {
        cin >> x[i] >> y[i];
    }
    ll a = y[0]-y[1], b = x[0]-x[1];
    ll res = b*(y[2] - y[0]) + a*(x[0] - x[2]);
    string ans;
    if (res > 0) {
        ans = "RIGHT";
    } else if (res == 0) {
        ans = "TOUCH";
    } else {
        ans = "LEFT";
    }
    cout << ans << "\n";
}