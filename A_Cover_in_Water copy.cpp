#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
     while (t--){
        int n;
        string c;
        cin>>n;
        cin>>c;
        int fill = 0;
        int remove = 0;
        for(int i=0;i<n;i++){
            if(c[i]=='.' && (c[i-1]!='.' || c[i+1]!='.')){
                fill++;
            }
        }
        cout<<fill<<endl;
    }

}