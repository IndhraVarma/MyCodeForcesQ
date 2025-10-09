#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long n,m,x,y;
    cin>>n>>m>>x>>y;
    
    if(((n-1)%x==0 && (m-1)%y==0)){
        cout<<"Chefirnemo"<<endl;
    }else if(n>1 && m>1 && ((n-2)%x==0 && (m-2)%y==0)){
        cout<<"Chefirnemo"<<endl;
    }else{
        cout<<"Pofik"<<endl;
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