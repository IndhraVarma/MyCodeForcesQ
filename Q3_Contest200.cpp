#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin>>n;

    if(n==1){
        cout<<"a"<<endl;
    }else{
        for(int i=0; i<n; i+=2){
            cout<<"ab";
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