#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>bricks(n);
    for(int i=0; i<n; i++){
        cin>>bricks[i];
    }
    int maxi=INT_MIN;
    int ans;
    for(int i=0; i<n; i++){
        if(bricks[i]>maxi){
            ans=i+1;
            maxi=bricks[i];
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