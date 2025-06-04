#include <iostream>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b==c || b+c==a || a+c==b){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }

}
int main() {
    long long tt;
    cin >> tt; // Number of test cases
    while (tt--) {
        solve(); // Call solve() for each test case
    }
}