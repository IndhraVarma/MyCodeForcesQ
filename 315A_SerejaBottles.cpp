#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<pair<int,int>>pairs(n);
    int cnt=0;
    for(int i=0; i<n; i++){
        cin>>pairs[i].first>>pairs[i].second;
    }
    for(int i=0; i<n; i++){
        bool openable=false;
        for(int j=0; j<n; j++){
            if(i!=j && pairs[j].second==pairs[i].first){
                openable=true;
                break;
            }
        }
        if(!openable){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}