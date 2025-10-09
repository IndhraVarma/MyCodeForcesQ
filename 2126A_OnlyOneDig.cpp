#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    if (!(cin >> t)) return 0;

    while (t--) {
        string s;
        cin>>s;
        int mini=INT_MAX;
        for(int i=0; i<s.size(); i++){
            mini=min((int)s[i]-48,mini);
        }
        cout<<mini<<endl;
    }
    return 0;
}
