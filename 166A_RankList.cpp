#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n,k;    
    cin>>n>>k;
    vector<pair<int,int>> pairs(n);
    for(int i=0; i<n; i++){
        int score,penalty;
        cin>>score>>penalty;
        pairs[i]={score,penalty};
    }
    sort(pairs.begin(),pairs.end(),[](const auto &x, const auto &y){
        if(x.first!=y.first) return x.first>y.first;
        return x.second<y.second;
    });

    auto target=pairs[k-1];
    int ans=0;
    for(auto &p:pairs) if(p==target)ans++;
    
    cout<<ans<<endl;
    return 0;
}
