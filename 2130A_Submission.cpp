#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    if (!(cin >> t)) return 0;

    while (t--) {
        int n,ans=0;
        cin>>n;
        vector<int>arr(n);
        for(int i=0; i<n; i++)cin>>arr[i];

        for(int i=0; i<n; i++){
            if(arr[i]==0){
                ans++;
            }else{
                ans+=arr[i];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
