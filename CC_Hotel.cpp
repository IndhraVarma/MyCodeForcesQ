#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>in(n),out(n);
    for(int i=0; i<n; i++){
        cin>>in[i];
    }
    for(int i=0; i<n; i++){
        cin>>out[i];
    }
    vector<pair<int,int>>v(n);
    for(int i=0; i<n; i++){
        v[i]={in[i],out[i]};
    }
    sort(v.begin(),v.end());
    int ans=1;
    for(int i=0; i<n; i++){
        int st=v[i].first;
        int end=v[i].second;
        for(int j=st; j<end; j++){
            int cnt=0;
            for(int k=0; k<n; k++){
                if(v[k].first<=j && v[k].second>j){
                    cnt++;
                }
            }
            ans=max(ans,cnt);
        }
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