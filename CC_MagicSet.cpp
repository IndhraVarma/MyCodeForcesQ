#include <bits/stdc++.h>
using namespace std;

const int MOD=1e9+1;

long long power(long long base,long long exp){
    long long res=1;
    base%=MOD;
    while(exp>0){
        if(exp%2==1) {
            res=(res*base)%MOD;
        }
        base = (base*base)%MOD;
        exp/=2;  
    }
    return res;
}

void solve() {
    int n,m;
    cin>>n>>m;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int cnt=0;
    for(int i=0; i<n; i++){
        if(arr[i]%m==0){
            cnt++;
        }
    }
    cout<<(1<<cnt)-1<<endl;
}
int main() {
    int tt;
    cin >> tt; // Number of test cases
    while (tt--) {
        solve(); // Call solve() for each test case
    }
    return 0;
}