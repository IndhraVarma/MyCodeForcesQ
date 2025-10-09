#include<bits/stdc++.h>

using namespace std;

void solve() {
    int l,r;
    cin>>l>>r;
    if(r>=2*l){
        cout<<r<<endl;
    }else{
        cout<<-1<<endl;
    }
}
int main() {
    int tt;
    cin>>tt; // Number of test cases
    while (tt--) {
        solve(); // Call solve() for each test case
    }
    return 0;
}