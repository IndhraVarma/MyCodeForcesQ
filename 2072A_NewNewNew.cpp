#include <iostream>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k,p;
    cin>>n>>k>>p; 
    p=abs(p);
    k=abs(k);
    if(k>p*n) cout<<-1<<endl;
    else cout<<(k+p-1)/p<<endl;

}
int main() {
    long long tt;
    cin >> tt; // Number of test cases
    while (tt--) {
        solve(); // Call solve() for each test case
    }
}