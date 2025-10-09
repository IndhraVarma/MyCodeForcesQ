#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long n,ans=0,x=0,p=1;
    cin>>n;
    while(n){
        long long cur=n%3;
        ans+=((p*3)+x*(p/3))*cur;
        x++;
        p*=3;
        n/=3;
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