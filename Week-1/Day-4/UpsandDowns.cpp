#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        //for(int i=0;i<n;i++) cout<<a[i];
        sort(a,a+n);

        int j=0,k=n-1;
        while(j<=k){
            cout<<a[j]<<" ";
            j++;
            if(j<=k) cout<<a[k]<<" ";
            k--;
        }
        cout<<'\n';
     }

    return 0;
}