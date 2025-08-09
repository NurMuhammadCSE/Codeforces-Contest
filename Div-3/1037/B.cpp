#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    while (n--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int maxCnt = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0) {
                cnt++; // Increment count for consecutive zeros
            }else{
                cnt= 0; // Reset count if a non-zero element is encountered
            }
            if (cnt == k) {
                maxCnt++;
                // cnt = -1;
                cnt = 0; // Reset count after finding a valid segment
                i++; // Skip the next element to avoid overlapping segments
            }
        }
        cout << maxCnt << endl;
    }
    
}
