#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int cnt=0;
    if(n==1){
        cout<<1<<endl;
        return;
    }
    for(int i=0; i<n-1; i++){
        if(arr[i]!=arr[i+1] && arr[i]%2==0 && arr[i+1]%2!=0){
            cnt++;
        }else if(arr[i]!=arr[i+1] && arr[i]%2!=0 && arr[i+1]%2==0){
            cnt++;
        }
        continue;
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