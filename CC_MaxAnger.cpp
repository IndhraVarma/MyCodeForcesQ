#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long n,k;
    cin>>n>>k;
    if(k>=n/2){
        cout<<n*(n-1)/2<<endl;
    }else{
        long long t=n-2*k;
        cout<<(n*(n-1))/2-(t*(t-1))/2<<endl;
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