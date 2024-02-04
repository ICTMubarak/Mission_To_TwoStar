#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        int a[3];
        cin>>a[0]>>a[1]>>a[2];
        int ans=0,tmpAns=0;
        if(a[0]>0){
            ans++; 
            a[0]--;
        } 
        if(a[1]>0){
            ans++; 
            a[1]--;
        } 
        if(a[2]>0){
            ans++;
            a[2]--;
        } 

        sort(a,a+3);

        if(a[2]>0 && a[1]>0){
            ans++;
            a[2]--;
            a[1]--;
        }

         if(a[1]>0 && a[0]>0){
            ans++;
            a[1]--;
            a[0]--;
        }

         if(a[2]>0 && a[0]>0){
            ans++;
            a[2]--;
            a[0]--;
        }
        
       cout<<ans<<'\n';
    }


    return 0;
}