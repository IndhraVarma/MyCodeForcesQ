#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<long long>arr(n);
    long long sum=0;
    long long mini= INT_MAX,maxi=INT_MIN;

    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(i%2==0){
            sum+=abs(arr[i]);
            mini=min(mini,abs(arr[i]));
        }else{
            sum-=abs(arr[i]);
            maxi=max(maxi,abs(arr[i]));
        }
    }
    cout<<max(sum,sum+2LL*(maxi-mini))<<endl;
}
int main() {
    int tt;
    cin >> tt; // Number of test cases
    while (tt--) {
        solve(); // Call solve() for each test case
    }
    return 0;
}