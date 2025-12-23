#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
     while (t--){
        int n;
        cin>>n;
        vector<int> a(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int total_sum = 0;
        for(int i=0;i<n-1;i++){
            total_sum += abs(a[i] - a[i+1]);
        }
        int max_gain = max(abs(a[0] - a[1]), abs(a[n-1] - a[n-2]));
        for (int i = 1; i < n - 1; i++) {
                int current_gain = abs(a[i-1] - a[i]) + abs(a[i] - a[i+1]) - abs(a[i-1] - a[i+1]);
                max_gain = max(max_gain, current_gain);
            }
        cout << total_sum - max_gain << "\n";

    }
}