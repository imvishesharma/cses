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
	ii n, m, h, t;
    cin >> n >> m;
    map<ii, ii> hh;
    rep(i, 0, n) {
        cin >> h;
        hh[h]++;
    }
    rep(i, 0, m) {
        cin >> t;
        auto idx = hh.lower_bound(t);
        if (idx->first > t || idx == hh.end()) {
            if (idx != hh.begin()) {
                idx--;
                ans = idx->first;
                if (idx->second == 1) {
                    hh.erase(idx->first);
                } else {
                    idx->second--;
                }
            } else {
                ans = -1;
            }
        } else {
            ans = idx->first;
            if (idx->second == 1) {
                hh.erase(idx->first);
            } else {
                idx->second--;
            }
        }
	    printf("%d\n", ans);
    }
}