#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define REP(i, a, n) for(int i = (a); i < (int)(n); ++i)
#define vi vector<int>
 
int helper(const int& u, vi tree[], int& ans, vi& vis) {
    if (vis[u]) {
        return 0;
    }
    vis[u] = 1;
    int size = tree[u].size();
    vi pl;
    for (auto & v : tree[u]) {
        if (v != u && !vis[v]) {
            pl.emplace_back(1 + helper(v, tree, ans, vis));
        }
    }
    if (!pl.size()) {
        return 0;
    }
    sort(pl.begin(), pl.end());
    size = pl.size();
    if (size > 1) {
        ans = max(ans, pl[size - 1] + pl[size - 2]);
    }
    ans = max(ans, pl[size - 1]);
    return pl[size - 1];
}
 
void solve() {
	int n;
	scanf("%d", &n);
	vi tree[n+1];
	int a, b;
	REP(i, 1, n) {
		scanf("%d %d", &a, &b);
		tree[a].push_back(b);
		tree[b].push_back(a);
	}
	vi vis(n+1, 0);
    int dia = 0;
	helper(1, tree, dia, vis);
	printf("%d\n", dia);
}
 
int32_t main() {
	IOS
 
	int testCase = 1;
	//scanf("%d", &testCase);
 
	REP(i, 0, testCase) {
		solve();
	}
	return 0;	
}
