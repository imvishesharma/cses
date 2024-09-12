#include <bits/stdc++.h>
using namespace std;

using ll = int64_t;

#define rep(i, a, b) for(int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

#define mend(i, n) " \n"[i == n-1]

int calc(int u, vector<vector<int>>& tree, vector<int>& dp) {
    if (dp[u] != -1) {
        return dp[u];
    }
    dp[u] = 0;
    for(int& v : tree[u]) {
        dp[u] += 1 + calc(v, tree, dp);
    }
    return dp[u];
}

void solve() {
	int n, x;
    cin >> n;
    vector<vector<int>> ch(n);
    rep(i, 1, n) {
        cin >> x;
        ch[x-1].emplace_back(i);
    }
    vector<int> dp(n, -1);
    dp[0] = calc(0, ch, dp);
    rep(i, 0, n) {
        cout << dp[i] << mend(i, n);
    }
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