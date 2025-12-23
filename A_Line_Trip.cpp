#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    int d;
    cin>>t;
     while (t--){
        int n,x;
        cin>>n>>x;

        int a[n+2];
        a[n+1] = x;
        a[0]=0;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        int ans = 0;

        for (int i = 1; i <= n; i++) {
            ans = max(ans, a[i] - a[i - 1]);
        }
        ans = max(ans, 2 * (x - a[n]));
        cout<<ans<<endl;
    }
}
