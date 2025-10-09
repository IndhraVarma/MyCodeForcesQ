#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int blacks=0,whites=0;

    for(int i=0; i<s.size(); ){
        if(s[i]=='B'){
            blacks++;
            while(i<n && s[i]=='B'){
                i++;
            }
        }else{
            whites++;
            while(i<n && s[i]=='W'){
                i++;
            }
        }
    }
    cout<<min(whites,blacks)<<endl;
}
int main() {
    int tt;
    cin >> tt; // Number of test cases
    while (tt--) {
        solve(); // Call solve() for each test case
    }
    return 0;
}