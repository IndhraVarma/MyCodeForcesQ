#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>arr(n);
    map<int,int>mp;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]==25){
            mp[25]++;
        }else if(arr[i]==50){
            if(mp[25]==0){
                cout<<"NO"<<endl;
                return 0;
            }
            mp[25]--;
            mp[50]++;
        }else{
            if(mp[50]>0 && mp[25]>0){
                mp[50]--;
                mp[25]--;
            }else if(mp[25]>=3){
                mp[25]-=3;
            }else{
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
