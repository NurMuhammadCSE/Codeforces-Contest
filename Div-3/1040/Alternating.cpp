// #include<bits/stdc++.h>
// using namespace std;

// using ll = long long;
// using ld = long double;
// #define INF(t) numeric_limits<t>::max()
 
// int main() {
// 	ios_base::sync_with_stdio(false); cin.tie(0);

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> a(n);

//         if(n % 2 == 0){
//             for(int i=0; i<n; i+= 2){
//                 a[i] = -1;
//                 a[i+1] = 2;
//             }
//         }else{
//             a[0] = -1;
//             a[1] = 3;
//             a[2] = -1;

//             for(int i=3; i<n; i+=2){
//                 a[i] = -1;
//                 a[i+1] = 2;
//             }
//         }

//         for(int i=0; i<n; i++){
//             cout << a[i] << " ";
//         }
//         cout << endl;
//     }
    
//     return 0;
// }

// Nur Muhammad
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n; cin >> n;
        vector<ll> a(n+1,0), S(n+1,0), prefMax(n+1, LLONG_MIN);
        S[0] = 0;
        prefMax[0] = S[0];
        for (int i = 1; i <= n; ++i) {
            if (i % 2 == 1) {
                // odd index -> -1
                a[i] = -1;
                S[i] = S[i-1] + a[i];
            } else {
                // even index
                if (i == n) {
                    // need S[i] > max_{0..i-2} S
                    ll M = prefMax[max(0, i-2)];
                    S[i] = M + 1;            // minimal integer > M
                } else {
                    // need S[i] > max_{0..i-1} S + 1
                    ll M = prefMax[i-1];
                    S[i] = M + 2;            // minimal integer > M+1
                }
                a[i] = S[i] - S[i-1];
            }
            prefMax[i] = max(prefMax[i-1], S[i]);
        }

        // output a[1..n]
        for (int i = 1; i <= n; ++i) {
            cout << a[i] << (i==n?'\n':' ');
        }
    }
    return 0;
}
