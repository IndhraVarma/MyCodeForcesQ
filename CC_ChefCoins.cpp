#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin>>n;
    if(n%6==0){
        cout<<"Misha"<<endl;
    }else{
        cout<<"Chef"<<endl;
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