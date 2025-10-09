#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt0=0;
    int cnt1=0;

    for(char c:s){
        if(c=='0'){
            cnt0++;
        }else{
            cnt1++;
        }
    }
    int moves=min(cnt0,cnt1);

    if(moves%2==0){
        cout<<"Ramos"<<endl;
    }else{
        cout<<"Zlatan"<<endl;
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