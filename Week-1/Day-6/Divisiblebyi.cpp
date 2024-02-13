#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        stack<int> stk;
        int j=1,k=n;
        for(int i=0;i<n;i++){
            if(i%2==0){
                stk.push(j);
                j++;
            }
            else{
                stk.push(k);
                k--;
            }
        }

        while(1){
            cout<<stk.top()<<" ";
            stk.pop();
            if(stk.empty()) break;
        }
        cout<<'\n';
    }

    return 0; 
}