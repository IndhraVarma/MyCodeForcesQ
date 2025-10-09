#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int mini=INT_MAX;
    int cnt=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            mini=min(mini,abs(arr[i]+arr[j]-k));
        }
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(mini==abs(arr[i]+arr[j]-k)){
                cnt++;
            }
        }
    }
    cout<<mini<<" "<<cnt<<endl;
}
int main() {
    int tt;
    cin >> tt; // Number of test cases
    while (tt--) {
        solve(); // Call solve() for each test case
    }
    return 0;
}