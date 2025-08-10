#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false), cin.tie(0);
    int T; cin >> T;
    while(T--) {
        int N, C;
        cin >> N >> C;
        vector<ll> A(N);
        for (ll &x : A) cin >> x;
        sort(A.rbegin(), A.rend()); // sort by decreasing order
        int saved = 0;
        for (ll x : A) {
            if (x*(1LL << saved) <= C) {
                ++saved;
            }
        }
        cout << N - saved << '\n';
    }
}


#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
#define INF(t) numeric_limits<t>::max()

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int tc; cin >> tc;
	while(tc--) {
		int n; ll c;
		cin >> n >> c;
		
		vector<ll> a(n);
		for(auto &x : a) cin >> x;

		sort(a.rbegin(), a.rend());

		int ans = 0; ll dbl = 1;
		for(auto &x : a) {
			x *= dbl;
			if(x <= c) {
				dbl *= 2;
			}
			else {
				ans++;
			}
		}

		cout << ans << "\n";
	}

	return 0;
}