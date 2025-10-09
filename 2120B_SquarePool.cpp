#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;
    cin>>n>>m;
    vector<int>d1(n+1),d2(n+1),x(n+1),y(n+1);
    for(int i=1; i<=n; i++){
        cin>>d1[i]>>d2[i]>>x[i]>>y[i];
    }
    int ans=0;
    for(int i = 1; i <= n; i++) {
        if(d1[i] && d2[i]) {
            if(d1[i] == d2[i] && x[i] == y[i]) ans++;
            else if(d1[i] != d2[i] && x[i] + y[i] == m) ans++;
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