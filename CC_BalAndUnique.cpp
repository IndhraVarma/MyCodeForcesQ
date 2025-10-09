#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>a(n/2);
    vector<int>b(n/2);
    if(n==1 || n%4!=0){
        cout<<"NO"<<endl;
        return;
    }else{
        cout<<"YES"<<endl;
        for(int i=0; i<n/4; i++){
            a[i]=2*i+1;
            b[i]=2*i+2;
        }
        for(int i=0; i<n/4; i++){
            a[n/4+i]=n-2*i;
            b[n/4+i]=n-(2*i+1);
        }
        for(int i=0; i<n/2; i++){
            cout<<a[i]<<" ";     
        }
        cout<<endl;
        for(int i=0; i<n/2; i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
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