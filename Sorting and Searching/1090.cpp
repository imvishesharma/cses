#include <bits/stdc++.h>
using namespace std;

using ii = int32_t;
using ll = int64_t;

#define rep(i, a, b) for(ii i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

#define mend(i, n) " \n"[i == n-1]

void solve();

ii main() {
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int nTestCase = 1;
	// cin >> nTestCase;
	rep(i, 0, nTestCase) {
		solve();
	}
	return 0;
}

void solve() {
	ll ans = 0;
	ll n, x;
	cin >> n >> x;

	ll p[n];
	rep(i, 0, n) {
		cin >> p[i];
	}
	sort(p, p+n);

	int i = 0, j = n-1;
	while (i < j) {
		if (p[j] + p[i] <= x) {
			++i;
		}
		--j;
		++ans;
	}
	if (i == j) {
		++ans;
	}
	printf("%d\n", ans);
}