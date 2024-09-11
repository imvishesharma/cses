#include <bits/stdc++.h>
using namespace std;

using ii = int32_t;
using ll = int64_t;

#define rep(i, a, b) for(ii i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

void solve();

ii main() {
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int nTestCase = 1;
	//cin >> nTestCase;
	rep(i, 0, nTestCase) {
		solve();
	}
	return 0;
}

void solve() {
	ii n, x, ans = 1;
	cin >> n;
	vector<ii> v(n);
	rep(i, 0, n) {
		cin >> v[i];
	}
	sort(all(v));
	rep(i, 1, n) {
		if (v[i] != v[i-1]) {
			++ans;
		}
	}
	printf("%d\n", ans);
}