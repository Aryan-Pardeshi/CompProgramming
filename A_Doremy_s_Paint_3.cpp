#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        unordered_map<int, int> freq;
        for (int x : a) {
            freq[x]++;
        }

        // Case 1: more than 2 distinct values
        if (freq.size() > 2) {
            cout << "No\n";
        }
        // Case 2: only one distinct value
        else if (freq.size() == 1) {
            cout << "Yes\n";
        }
        // Case 3: exactly two distinct values
        else {
            auto it = freq.begin();
            int c1 = it->second;
            it++;
            int c2 = it->second;

            if (abs(c1 - c2) <= 1)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }

    return 0;
}
