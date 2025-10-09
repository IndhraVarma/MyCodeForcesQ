#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int mini=INT_MAX;
    int j=n-1;
    for(int i=0; i<n-1; i++){
        if(arr[i]+(arr[i+1]/2)<mini){
            mini=arr[i]+(arr[i+1]/2);
        }
    }
    sort(arr.begin(),arr.end());
    if(arr[0]+arr[1]<mini){
        mini=arr[0]+arr[1];
    }
    cout<<mini<<endl;
}
int main() {
    int tt;
    cin >> tt; // Number of test cases
    while (tt--) {
        solve(); // Call solve() for each test case
    }
    return 0;
}