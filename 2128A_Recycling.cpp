#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    if (!(cin >> t)) return 0;

    while (t--) {
        long long n,c;
        cin>>n>>c;
        long long multiplier=1;
        vector<long long>arr(n);
        for(int i=0; i<n; i++) cin>>arr[i];
        long long cnt=0;
        
        sort(arr.begin(),arr.end());
        
        for(int i=n-1; i>=0; i--){
            if(arr[i]>c){
                cnt++;
            }else{
                if(arr[i]*multiplier>c){
                    cnt++;
                }else{
                    multiplier*=2;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
