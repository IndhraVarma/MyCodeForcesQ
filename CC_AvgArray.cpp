#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,x;
    cin>>n>>x;

    vector<int>ans(n);

    if(n%2==0){
        for(int i=1; i<=n/2; i++){
            ans.push_back(x-i);
            ans.push_back(x+i);
        }
    }else{
        ans.push_back(x);
        for(int i=1; i<=n/2; i++){
            ans.push_back(x-i);
            ans.push_back(x+i);
        }
    }
    for(int val:ans){
        cout<<val<<" ";
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