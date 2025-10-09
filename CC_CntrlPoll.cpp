#include<bits/stdc++.h>
using namespace std;
#define ll long long int;

void solve() {
    int n,x,y;
    cin>>n>>x>>y;

    int smoke=0;

    int buses=n/100;
    int cars= buses*25;
    int busSmoke=buses*x;
    int carSmoke=cars*y;
    
    smoke=min(carSmoke,busSmoke);

    n= n%100;

    if(n>0){
        int cars=ceil(n/4.0);
        int carSmoke=cars*y;
        int busSmoke=busSmoke*x;
        smoke+=min(busSmoke,carSmoke);
    }
    cout<<smoke<<endl;
}
int main() {
    int tt;
    cin>>tt; // Number of test cases
    while (tt--) {
        solve(); // Call solve() for each test case
    }
    return 0;
}