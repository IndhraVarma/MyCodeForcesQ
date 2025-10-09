#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    if(n==1){
        cout<<"YES"<<endl;
        return;
    }

    int max_val=arr[0];
    int min_val=arr[0];

    for(int i=0; i<n; i++){
        min_val=min(min_val,arr[i]);
        max_val=max(max_val,arr[i]);
    }
    if(min_val+max_val<=k){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
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