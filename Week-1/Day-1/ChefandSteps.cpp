#include<bits/stdc++.h>
using namespace std;
int main(){
    //  ios_base::sync_with_stdio(false);
    //  cin.tie(NULL);
    //  cout.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n,k,x; cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
            if(a[i]%k==0) cout<<1;
            else cout<<0;
        }
        cout<<'\n';
    }
    return 0;
}