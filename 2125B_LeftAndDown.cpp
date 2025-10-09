#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    if (!(cin >> t)) return 0;

    while (t--) {
        long long a,b,k;
        cin>>a>>b>>k;
        long long x= __gcd(a,b);
        a/=x, b/=x;
        if(a<=k && b<=k) cout<<1<<endl;
        else cout<<2<<endl;
    }
    return 0;
}
