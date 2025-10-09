#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;
    vector<long long>arr(n);
    for(long long i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    long long cnt=0;
    for(long long i=1; i<=n; i++){
        cnt+=abs(i-arr[i-1]);
    }
    cout<<cnt<<endl;
    return 0;
}