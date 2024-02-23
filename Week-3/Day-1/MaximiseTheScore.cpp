#include<bits/stdc++.h>
using namespace std;
int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     int t; cin>>t;
     while(t--){
        int n; cin>>n;
       long long int m=n*2;
       long long int arr[m];
       for(long long int i=0;i<m;i++) cin>>arr[i];
       sort(arr,arr+m);
       long long int sum=0;
       for(int i=1;i<m;i=i+2){
        sum=sum+min(arr[i],arr[i-1]);
        //cout<<arr[i-1]<<" "<<arr[i];
       }
       cout<<sum<<'\n';
     }
    
    return 0;
}
