#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<long long>arr(n);
    long long totalSum=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        totalSum+=arr[i];
    }
    long long sumX=totalSum/(n-1);

    vector<long long>ans(n-1);
    for(int i=0; i<n; i++){
        ans[i]=sumX-arr[i];
    }
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main() {
    int tt;
    cin>>tt; // Number of test cases
    while (tt--) {
        solve(); // Call solve() for each test case
    }
    return 0;
}