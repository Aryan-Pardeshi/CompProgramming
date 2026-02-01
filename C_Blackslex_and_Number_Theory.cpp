#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if(!(cin >> t)) return 0;
    while(t--){
        int n;
        cin >> n;
        vector<int64> a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a.begin(), a.end());      

    }
    return 0;
}
