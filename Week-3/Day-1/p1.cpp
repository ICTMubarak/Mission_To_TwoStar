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
        
        int findx=0,lindx=n-1,ans=0;
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                findx=i;
                break;
            }
        }

        for(int i=n-1;i>-1;i--){
            if(arr[i]==1){
                lindx=i;
                break;
            }
        }

        for(int i=findx;i<=lindx;i++){
            if(arr[i]==0) ans++;
        }

        cout<<ans<<'\n';
       
     }
    
    return 0;
}
