#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n,s;
    cin>>n>>s;
    vector<int>arr(n);
    int maxi=INT_MIN;
    for(int i=0; i<n; i++) cin>>arr[i];
    
    int to_end=min(abs(s-arr[0]),abs(s-arr.back()));
    int to_front=arr.back()-arr[0];
    int ans=to_end+to_front;

    cout<<ans<<endl;
}
 
int main(){
    int t;
    cin >> t;
    while(t--) solve();
}