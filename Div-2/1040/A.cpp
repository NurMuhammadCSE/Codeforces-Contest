#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
#define INF(t) numeric_limits<t>::max()
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

    int n;
    cin >> n;

    while (n--)
    {
        int t;
        cin >> t;
        vector<int> a(t);
        for (int i = 0; i < t; i++)
            cin >> a[i];
        
        int ans = 0;
        for (int i = 0; i < t; i++)
        {
            // ans += a[i] + (a[i] == 0);
            ans += max(a[i], 1);
        }
        cout << ans << endl;
    }
    

    return 0;
}