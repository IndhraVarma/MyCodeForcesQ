#include<bits/stdc++.h>
using namespace std;

int main(){
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n;
    cin>>n;
    vector<int>arr(n*2);
    for(int i=0; i<n*2; i++){
        cin>>arr[i];
    }
    map<int,vector<int>>mp;
    
    for(int i=0; i<n*2; i++){
        mp[arr[i]].push_back(i+1);
    }
    for(auto &i:mp){
        if(i.second.size()%2!=0){
            cout<<-1<<endl;
            return 0;
        }
    }

    for(auto &i:mp){
        auto &v=i.second;
        for(int i=0; i<v.size(); i+=2){
            cout<<v[i]<<" "<<v[i+1]<<endl;
        }
    }
    return 0;
}