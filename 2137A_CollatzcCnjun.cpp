#include<bits/stdc++.h>
using namespace std;

void solve() {
    int k,x;
    cin>>k>>x;
    int cur=x;
    for(int i=0; i<k; i++){
        cur*=2;
    }
    cout<<cur<<endl;
}
int main() {
    int tt;
    cin >> tt; // Number of test cases
    while (tt--) {
        solve(); // Call solve() for each test case
    }
    return 0;
}