#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)arr[i]=i+1;

    swap(arr[1],arr[n-1]);

    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
}
int main() {
    int tt;
    cin >> tt; // Number of test cases
    while (tt--) {
        solve(); // Call solve() for each test case
    }
    return 0;
}