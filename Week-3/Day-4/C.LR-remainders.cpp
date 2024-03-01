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
        vector<int> v;
        for(int i=0;i<n;i++) cin>>arr[i];

        string str; cin>>str;

        int k=0,l=n-1;

        for(int i=0;i<str.length();i++){
            if(str[i]=='L'){
                v.push_back(arr[k]);
                k++;
            }
            else{
                v.push_back(arr[l]);
                l--;
            }
        }
        long long int ml=1;
        unsigned long long int ans[n];
        for(int i=n-1;i>-1;i--){
            ml=ml*v[i];
            //cout<<ml%m<<" ";
            ans[i]=ml%m;
        }
        cout<<ml;
        //for(int i=0;i<n;i++) cout<<ans[i]<<" ";
       cout<<'\n';
     }
    
    return 0;
}
