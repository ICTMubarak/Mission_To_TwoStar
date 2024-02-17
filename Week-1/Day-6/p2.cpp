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
        cin>>arr[0];
        int mn=arr[0];
        bool f=true;
        for(int i=1;i<n;i++){
            cin>>arr[i];
            if(mn>arr[i]){
                f=false;
            }
            else mn=arr[i];
        }

        cout<<n<<'\n';

        if(f) cout<<"YES"<<'\n';
        else{

            f = true;
            
            while(f){
                f=false;
                for(int i=2;i<n;i++){
                for(int j=0;j<i-2;j++){
                    //cout<<j<<" "<<i<<" "<<n<<" "<<'\n';
                    if(arr[j]>arr[i]){
                        //cout<<arr[j]<<" "<<arr[i]<<'\n';
                        
                        int t=arr[j];
                        arr[j]=arr[i];
                        arr[i]=t;
                        f=true;
                    }
                }
            }
            }

             mn=arr[0];
         f=true;
        for(int i=1;i<n;i++){
            cin>>arr[i];
            if(mn>arr[i]){
                f=false;
            }
            else mn=arr[i];
        }

       //for(int i=0;i<n;i++) cout<<arr[i]<<" ";

        if(f) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';



        }
        
     }
    
    return 0;
}