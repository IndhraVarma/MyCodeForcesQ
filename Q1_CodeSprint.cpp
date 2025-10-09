#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int mini=INT_MAX;
    int maxi=INT_MIN;
    for(int i=0; i<n; i++){
        mini=min(arr[i],mini);
        maxi=max(arr[i],maxi);
    }
    cout<<maxi-mini<<endl;
}
int main() {
    int tt;
    cin >> tt; // Number of test cases
    while (tt--) {
        solve(); // Call solve() for each test case
    }
    return 0;
}