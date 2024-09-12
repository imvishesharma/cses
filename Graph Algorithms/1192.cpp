#include <bits/stdc++.h>
using namespace std;

using ll = int64_t;

#define rep(i, a, b) for(int i = (a); i < (b); ++i)
#define all(a) (a).begin(), (a).end()

#define mend(i, n) " \n"[i == n-1]

#define MOD 1000'000'007

void solve() {
	int n, m;
    cin >> n >> m;
    vector<string> v(n);
    string s;
    rep(i, 0, n) {
        cin >> s;
        v[i] = s;
    }
    
    int dxy[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    auto isValid = [&](const int& r, const int& c) {
        return (r >= 0 && r < n && c >= 0 && c < m);
    };

    vector<vector<bool>> vis(n, vector<bool>(m, false));
    int nRooms = 0;
    rep(i, 0, n) {
        rep(j, 0, m) {
            if (v[i][j] == '.' && !vis[i][j]) {
                ++nRooms;
                queue<pair<int, int>> q;
                q.push({i, j});
                while (!q.empty()) {
                    auto [r, c] = q.front(); q.pop();
                    if (!vis[r][c]) {
                        vis[r][c] = true;
                        for (int k = 0; k < 4; ++k) {
                            int _r = r + dxy[k][0];
                            int _c = c + dxy[k][1];
                            if (isValid(_r, _c) && !vis[_r][_c] && v[_r][_c] == '.') {
                                q.push({_r, _c});
                            }
                        }
                    }
                }
            }
        }
    }
    cout << nRooms << "\n";
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