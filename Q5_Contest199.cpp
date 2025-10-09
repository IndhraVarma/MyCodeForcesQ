#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin>>n;
    long long ans;
    if(n%2!=0){
        ans=(n+1)/2;
    }else{
        ans= n/2+(n+3)/4;
    }
    cout<<ans<<endl;
}

int main() {
    int tt;
    cin >> tt;
    while(tt--) {
        solve();
    }
    return 0;
}