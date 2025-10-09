#include <bits/stdc++.h>

using namespace std;

void solve() {
    int a1,b1,a2,b2;
    cin>>a1>>b1>>a2>>b2;
    int iniSum= (5*a1)+b1;
    int finSum= (5*a2)+b2;

    if(iniSum>= finSum && (iniSum-finSum)%6==0){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
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