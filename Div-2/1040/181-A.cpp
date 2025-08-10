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
        string s;
        cin >> s;

        sort(s.begin(), s.end());

        reverse(s.begin(), s.end());
        cout << s << endl;
    }
    

    return 0;
}