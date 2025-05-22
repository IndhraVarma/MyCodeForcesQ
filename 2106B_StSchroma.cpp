#include<iostream>
#include<string>
#include<vector>
#include <algorithm>

using namespace std;

void solve() {
    long long x,n;
    cin>>n>>x;
    if(x==n){
        for(long long i=0; i<n; i++){
            cout<<i<<' ';
        }
        cout<<endl;
        return;
    }

    vector<int>ans;
    for(long long i=0; i<x; i++){
        ans.push_back(i);
    }
    for(int i=x+1; i<n; i++){
        ans.push_back(i);
    }
    ans.push_back(x);
    for(auto x:ans){
        cout<<x<<' ';
    }
    cout<<endl;

}
int main() {
    long long tt;
    cin >> tt; // Number of test cases
    while (tt--) {
        solve(); // Call solve() for each test case
    }
}