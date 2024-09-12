#include <bits/stdc++.h>
using namespace std;

using ll = int64_t;

#define rep(i, a, b) for(int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

#define mend(i, n) " \n"[i == n-1]

#define MOD 1000'000'007

ll power(ll a, ll n, const int& m) {
    a %= m;
    int res = 1;
    while (n > 0) {
        if (n&1) {
            res = res * a % m;
        }
        a = a*a % m;
        n >>= 1;
    }
    return res; 
}

void solve() {
	int n;
    cin >> n;
    cout << power(2, n, MOD) << "\n";
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