#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0; i<n; i++) cin>>arr[i];
        vector<int>prefMin(n),sufMax(n);
        prefMin[0]=arr[0];
        
        for(int i=1; i<n; i++) prefMin[i]=min(prefMin[i-1],arr[i]);
        sufMax[n-1]=arr[n-1];

        for(int i=n-2; i>=0; i--){
            sufMax[i]=max(sufMax[i+1],arr[i]);
        }
        string ans(n,'0');
        for(int i=0; i<n; i++){
            if(arr[i]==prefMin[i]||arr[i]==sufMax[i]){
                ans[i]='1';
            }
        }
        cout<<ans<<endl;
    }
}