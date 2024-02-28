#include<bits/stdc++.h>
using namespace std;
int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     int t; cin>>t;
     while(t--){
        int n; cin>>n;
        int i=1,j=n;
        while(j>=i){
            cout<<j<<" ";
            j--;
            if(j<i) break;
            cout<<i<<" ";
            i++;
            if(j<i) break;
        }
        cout<<'\n';
       
     }
    
    return 0;
}
