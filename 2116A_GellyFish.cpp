#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    if(min(a,c)<min(b,d)){
        cout<<"Flower"<<endl;
    }else{
        cout<<"Gellyfish"<<endl;
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