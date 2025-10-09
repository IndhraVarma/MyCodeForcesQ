#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    long long sum=0;
    int neg=0;
    int mn=INT_MAX;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int x;
            cin>>x;
            if(x<0)neg++;
            sum+=abs(x);
            mn=min(mn,abs(x));
        }
    }
    if(neg%2==0){
        cout<<sum<<endl;
    }else{
        cout<<sum-2LL*mn<<endl;
    }
}
int main() {
    long long tt;
    cin >> tt; // Number of test cases
    while (tt--) {
        solve(); // Call solve() for each test case
    }
}