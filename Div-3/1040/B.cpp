#include <bits/stdc++.h>
using namespace std;

// This code solves a problem where we need to generate a sequence based on the input size n.
// The sequence alternates between -1 and 2, with special handling for odd n values.

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    // The problem requires us to generate a specific sequence based on the value of n.
    // The sequence alternates between -1 and 2, with special handling for odd n values.
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        if (n % 2 == 0) {
            for (int i = 0; i < n; i += 2) {
                a[i] = -1;
                a[i + 1] = 2;
            }
        } else {
            a[0] = -1;
            a[1] = 3;
            a[2] = -1;
            for (int i = 3; i < n; i += 2) {
                a[i] = -1;
                a[i + 1] = 2;
            }
        }
        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}