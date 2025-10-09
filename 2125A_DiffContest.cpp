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
        sort(s.begin(),s.end());
        reverse(s.begin(),s.end());
        cout<<s<<endl;
    }
    return 0;
}
