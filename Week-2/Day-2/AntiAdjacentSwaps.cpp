#include<bits/stdc++.h>
using namespace std;
int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     int t; cin>>t;
     while(t--){
        int n; cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];

        if(n<3){
            if(n==1) cout<<"YES"<<'\n';
            else if(arr[0]<=arr[1]) cout<<"YES"<<'\n';
            else cout<<"NO"<<'\n';
        }
        else{
            if(n==3){
                if(arr[0]<=arr[1]&&arr[1]<=arr[2]) cout<<"YES"<<'\n';
                else if(arr[0]>=arr[1]&&arr[1]>=arr[2]) cout<<"YES"<<'\n';
                else  cout<<"NO"<<'\n';

            }
            else cout<<"YES"<<'\n';
        }
        
     }
    
    return 0;
}