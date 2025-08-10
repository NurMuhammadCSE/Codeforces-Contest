#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        // Special case: if all elements in b are greater than or equal to those in a

        int positiveSum = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] > b[i]) positiveSum += (a[i] - b[i]);
        }

        cout << positiveSum + 1 << "\n";
    }
    return 0;
}
