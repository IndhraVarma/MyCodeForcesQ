#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>arr(n*2);

    for(int i=0; i<2*n; i++){
        cin>>arr[i];
    }
    long long ans=0; 
    int cnt=0;
    
    for(int i=0; i<2*n; i++){
        if(arr[i]<=n){
            ans+=cnt;
        }else{
            cnt++;
        }
    }
    cout<<ans<<endl;
}
int main() {
    int tt;
    cin >> tt; // Number of test cases
    while (tt--) {
        solve(); // Call solve() for each test case
    }
    return 0;
}