#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin>>n;
        int a[n-1];
        int sum = 0;
        for(int i=0;i<(n-1);i++){
            cin >> a[i];
            sum += a[i];
        }

        cout << -sum << endl;

    }

    return 0;
}