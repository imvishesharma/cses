#include <bits/stdc++.h>
using namespace std;
 
void solve() {
	int64_t n;
	cin >> n;
	while (n != 1) {
        cout << n << " ";
        n = n%2 ? (n * 3 + 1) : (n >> 1);
    }
    cout << n << endl;
}
 
int32_t main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
	int testCase = 1;
	// cin >> testCase;
 
	while(testCase--) {
		solve();
	}
 
	return 0;	
}