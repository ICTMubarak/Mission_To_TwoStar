#include<bits/stdc++.h>
using namespace std;
int main(){

    int t; cin>>t;
    while(t--){
       int n; cin>>n;
       int m=n*2;
       int arr[m];
       for(int i=0;i<m;i++) cin>>arr[i];
       sort(arr, arr+m);
       long long int sum=0;
       for(int i=0;i<m;i=i++){
        sum=sum+min(arr[i],arr[i-1]);
       }
       cout<<sum<<'\n';
    }
    return 0;
}