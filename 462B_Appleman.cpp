#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,k;
    string s;
    cin>>n>>k>>s;
    map<char,int>mp;
    
    for(char c:s){
        mp[c]++;
    }
    vector<long long>freq;
    for(auto &p:mp){
        freq.push_back(p.second);
    }

    sort(freq.rbegin(),freq.rend());
    
    long long ans=0;
    for(long long f:freq){
        if(k==0) break;
        long long take=min((long long)k, f);
        ans+=take*take;
        k-=take;
    }
    cout<<ans<<endl;
    return 0;
}