#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long n,k;
    cin>>n>>k;
    long long ans=0;
    long long mini=INT_MAX;
    int x;
    vector<long long>arr(n);
    for(long long i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(k%arr[i]==0){
            x=k-arr[i];
            if(mini>x/arr[i]){
                mini=x/arr[i];
                ans=arr[i];
            }
        }
    }
    if(ans==0){
        cout<<-1<<endl;
    }else{
        cout<<ans<<endl;
    }
}
int main() {
    int tt;
    cin >> tt; // Number of test cases
    while (tt--) {
        solve(); // Call solve() for each test case
    }
    return 0;
}