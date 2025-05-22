#include<iostream>
#include<string>
#include<vector>
#include <algorithm>

using namespace std;

void solve() {
    int x,y,a;
    cin>>x>>y>>a;
    a=a%(x+y);
    if(a< x) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
int main() {
    long long tt;
    cin >> tt; // Number of test cases
    while (tt--) {
        solve(); // Call solve() for each test case
    }
}