#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long l,r;
    cin>>l>>r;
    cout<<(r/3)-((l-1)/3)<<endl;
}
int main() {
    int tt;
    cin >> tt; // Number of test cases
    while (tt--) {
        solve(); // Call solve() for each test case
    }
    return 0;
}