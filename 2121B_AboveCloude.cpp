#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>freq(26,0);
    for(auto c:s) freq[c-'a']++;

    int flag=0;

    for(int i=0; i<26; i++){
        if(freq[i]>=3) flag=1;
        else if(freq[i]==2 && (s[0]-'a'!=i || s.back()-'a'!=i)) flag=1; 
    }
    if(flag) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
 
int main(){
    int t;
    cin >> t;
    while(t--) solve();
}