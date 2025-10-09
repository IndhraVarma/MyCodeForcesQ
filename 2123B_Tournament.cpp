#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    if (!(cin >> t)) return 0;

    while (t--) {
        
        int n,k,j;
        cin>>n>>j>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        int strength=*max_element(arr.begin(),arr.end());
        int playerj=arr[j-1];
        if(playerj==strength)cout<<"YES\n";
        
        else{
            if(k>1)cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}

