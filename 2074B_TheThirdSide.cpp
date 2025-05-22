#include <iostream>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    while(arr.size()>=2){
        int x=arr.back();
        arr.pop_back();
        int y= arr.back();
        arr.pop_back();
        arr.push_back(x+y-1);
    }
    cout<<arr[0]<<endl;
}
int main() {
    long long tt;
    cin >> tt; // Number of test cases
    while (tt--) {
        solve(); // Call solve() for each test case
    }
}