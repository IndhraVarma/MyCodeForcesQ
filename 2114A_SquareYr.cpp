#include<bits/stdc++.h>
using namespace std;

void solve() {
    int x;
    cin>>x;
    for(int i=0; i<100; i++){
        for(int j=0; j<100; j++){
            if(i*i+j*j+2*i*j==x){
                cout<<i<<" "<<j<<endl;
                return;
            }
        }
    }
    cout<<-1<<endl;
}
int main() {
    int tt;
    cin >> tt; // Number of test cases
    while (tt--) {
        solve(); // Call solve() for each test case
    }
    return 0;
}