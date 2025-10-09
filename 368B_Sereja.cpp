#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n,m;
    cin>>n>>m;

    vector<long long>arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];

    vector<long long>arr2(m);
    for(int i=0; i<m; i++) cin>>arr2[i];

    vector<int>ans(n+1,0);
    map<int,bool>seen;
    int distinct=0;

    for(int i=n-1; i>=0; i--){
        if(!seen[arr[i]]){
            distinct++;
            seen[arr[i]]=true;
        }
        ans[i+1]=distinct;
    }
    for(int i=0; i<m; i++){
        cout<<ans[arr2[i]]<<endl;
    }
    return 0;
}