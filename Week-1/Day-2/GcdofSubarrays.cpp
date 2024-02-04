#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
       long long int n, k; cin>>n>>k;
       long long int c = n*(n+1)/2;
       if(c>k) cout<<-1<<'\n';
       else{
        for(int i=0;i<n-1;i++) cout<<1<<" ";
        cout<<k-c+1<<'\n';
       }
    }

    return 0;
}