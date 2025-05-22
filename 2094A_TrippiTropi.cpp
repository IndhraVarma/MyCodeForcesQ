#include<iostream>
#include<string>
#include<vector>
#include <algorithm>

using namespace std;

void solve() {
    string s,t,u;
    cin>>s>>t>>u;
    cout<<s[0]<<t[0]<<u[0]<<endl;
}
int main() {
    long long tt;
    cin >> tt; // Number of test cases
    while (tt--) {
        solve(); // Call solve() for each test case
    }
}