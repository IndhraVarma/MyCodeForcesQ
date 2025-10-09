#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    if (!(cin >> t)) return 0;

    while (t--) {
        long long n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i=0; i<n; i++) cin>>arr[i];
        int cnt=0,ans=0;

        for(int i=0; i<n; i++){
            if(arr[i]==0){
                cnt++;
                if(cnt==k){
                    ans++;
                    cnt=0;
                    i++;
                }
                if(arr[i+1]==1){
                    cnt=0;
                }
            }else{
                cnt=0;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
