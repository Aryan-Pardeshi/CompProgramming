#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    bool s = false;
    int t,n,k;
    int a[100];
 
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>k;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
    if(k>1 || is_sorted(a, a + n)){
        s=true;
    }
    else {
        s=false;
            
    }
    if(s==false){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    }
}