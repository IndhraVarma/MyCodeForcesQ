#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include<climits>
#include<map>
 
using namespace std;
 
int main() {
    int n;
    cin>>n;
    vector<pair<int,int>>segments(n);
    int min_l=INT_MAX;
    int max_r=INT_MIN;
    
    for(int i=0; i<n; i++){
        int l,r;
        cin>>l>>r;
        segments[i]={l,r};
        min_l=min(min_l,l);
        max_r=max(max_r,r);
    }

    for(int i=0; i<n; i++){
        if(segments[i].first==min_l && segments[i].second==max_r){
            cout<<i+1;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}
