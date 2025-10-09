#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>arr(n);
    long long sum=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    long long ans=sum;
    long long prefix=0;
    for(int i=0; i<n; i++){
        prefix+=arr[i];
        long long secProcessor=sum-prefix;
        ans=min(ans,max(prefix,secProcessor));
    }
    cout<<ans<<endl;

}
int main() {
    int tt;
    cin>>tt; // Number of test cases
    while (tt--) {
        solve(); // Call solve() for each test case
    }
    return 0;
}