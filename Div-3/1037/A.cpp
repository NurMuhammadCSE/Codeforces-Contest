#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    while (n--)
    {
        string s;
        cin >> s;
        int mini = '9';
        for(auto &ch : s){
            mini = min(mini, (ch - '0'));
        }
        cout << mini << endl;
    }
    
}
