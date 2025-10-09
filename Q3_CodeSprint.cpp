#include <bits/stdc++.h>
using namespace std;

void solve() {
    string main,s;
    cin>>main;
    cin>>s;
    map<char,int>mp;
    for(int i=1; i<=main.size();i++){
        mp[main[i]]=i;
    }
    int sum=0;
    for(int i=0; i<s.size()-1; i++){
        sum+=abs(mp[s[i+1]]-mp[s[i]]);
    }
    cout<<sum<<endl;
}
int main() {
    int tt;
    cin >> tt; // Number of test cases
    while (tt--) {
        solve(); // Call solve() for each test case
    }
    return 0;
}