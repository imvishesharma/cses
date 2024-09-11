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
	ii n, m, k, ans = 0;
	cin >> n >> m >> k;

	vector<ii> a(n), b(m);

	rep(i, 0, n) {
		cin >> a[i];
	}
	rep(i, 0, m) {
		cin >> b[i];
	}

	sort(all(a));
	sort(all(b));
	
	// rep(i, 0, n) {
	// 	cout << a[i] << " \n"[i == n-1];
	// }
	// rep(i, 0, m) {
	// 	cout << b[i] << " \n"[i == m-1];
	// }

	ii i = 0, j = 0;
	while (i < n && j < m) {
		if (abs(a[i]-b[j]) <= k) {
			++i;
			++j;
			++ans;
			continue;
		}

		if (a[i] > b[j]) {
			++j;
		} else {
			++i;
		}
	}
	
	printf("%d\n", ans);
}