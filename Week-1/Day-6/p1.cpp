#include<bits/stdc++.h>
using namespace std;
int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     int t; cin>>t;
     while(t--){
        int n; cin>>n;
        if(n%2==0) cout<<n/2<<" ";
        else cout<<n/2+1<<" ";
        if(n%3==0) cout<<n/3;
        else cout<<n/3+1;
        cout<<'\n';
     }
    
    return 0;
}