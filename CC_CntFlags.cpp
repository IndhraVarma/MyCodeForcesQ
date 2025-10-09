#include<bits/stdc++.h>
using namespace std;
#define ll long long int;

void solve() {
    int n;
    cin>>n;
    ll ans=0ll;
    ans+=(2ll * n * (n-1)* (n-2));
    ans+=(n*(n-1)*(n-2));
    ans+=(2ll*n*(n-1)*(n-2)*(n-2));
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