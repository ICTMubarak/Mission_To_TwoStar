#include<bits/stdc++.h>
using namespace std;
int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     int t; cin>>t;
     while(t--){
        long long int n,m; cin>>n>>m;
        long long int arr[n];
        unsigned long long int ml=1;
        bool f=false;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%m==0) f=true;
            ml=ml*arr[i];
        }
        //cout<<ml<<'\n';
        string str; cin>>str;
        int k=0,l=n-1;
        if(f) cout<<0<<" ";
        else cout<<ml%m<<" ";
        for(int i=0;i<str.length()-1;i++){
            if(str[i]=='L'){
                ml=ml/arr[k];
                cout<<ml%m<<" ";
                k++;
            }
            else{
                ml=ml/arr[l];
                cout<<ml%m<<" ";
                l--;
            }
        }
       cout<<'\n';
     }
    
    return 0;
}
