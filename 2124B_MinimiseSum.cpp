#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>arr(n);

        for(int i=0; i<n; i++) cin>>arr[i];

        if(n==1){
            cout<<arr[0]<<endl;
            continue;
        }

        int ans=arr[0];
        int x= min(arr[0],arr[1]);
        cout<<ans+x<<endl;
    }
}