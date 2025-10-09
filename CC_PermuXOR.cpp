#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int>item(n);
    vector<int>time(n);
    for(int i=0; i<n; i++){
        cin>>item[i];
    }
    for(int i=0; i<n; i++){
        cin>>time[i];
    }

    map<int,int>mp;
    for(int i=0; i<n; i++){
        if(mp.find(item[i])==mp.end()){
            mp[item[i]]=time[i];
        }else{
            mp[item[i]]=min(mp[item[i]],time[i]);
        }
    }

    vector<int>min_time;
    for(auto &i:mp){
        min_time.push_back(i.second);
    }
    sort(min_time.begin(),min_time.end());

    if(mp.size()<k){
        cout<<-1<<endl;
    }else{
        int totalTime=0;
        for(int i=0; i<k; i++){
            totalTime+=min_time[i];
        }
        cout<<totalTime<<endl;
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