#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>fences(n);
    for(int i=0; i<n; i++){
        cin>>fences[i];
    }

    map<int,int>mp;

    for(int i=0; i<n; i++){
        mp[fences[i]]++;
    }

    int maxi=INT_MIN;

    for(int i=0; i<n; i++){
        if(mp[fences[i]]>maxi){
            maxi=mp[fences[i]];
        }
    }
    if(mp[1]==n){
        cout<<0<<endl;
    }else if(mp[1]>0){
        cout<<n-mp[1]<<endl;
    }else{
        cout<<n-(maxi+1)<<endl;
    }
}
int main() {
    int tt;
    cin >> tt; // Number of test cases
    while (tt--) {
        solve(); // Call solve() for each test case
    }
    return 0;
}