#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    cin>>s;
    map<char,int>mp;
    for(int i=0; i<n; i++){
        if(s[i]=='c'){
            mp['c']++;
        }else if(s[i]=='a'){
            mp['a']++;
        }else if(s[i]=='t'){
            mp['t']++;
        }
    }
    if(mp['c']==1 && mp['a']==1 && mp['t']==1){
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