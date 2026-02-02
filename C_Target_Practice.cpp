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
        int score = 0;
        for (int i = 0; i < 10; i++) {
            string s;
            cin >> s;  // reads one row of the target
            for(int j = 0; j<10;j++) {
                if(s[j]=='X'){
                    int d = min({i, j, 9 - i, 9 - j});
                    score += d + 1;
                }
            }
            
        }
    cout<<score<<endl;
    }

    return 0;
}