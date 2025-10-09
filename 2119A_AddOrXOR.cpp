#include<bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    if(a&1){
        if(b==a-1) cout<<y<<endl;
        else if(b>=a)cout<<min((b-a)*x,(b-a)/2*y+(b-a+1)/2*x)<<endl;
        else cout<<-1<<endl;
        return;
    }
    if(b<a){
        cout<<-1<<endl;
        return;
    } 
    cout<<min((b-a)/2*x+(b-a+1)/2*y, (b-a)*x)<<endl;
}
int main() {
    int tt;
    cin >> tt; // Number of test cases
    while (tt--) {
        solve(); // Call solve() for each test case
    }
    return 0;
}