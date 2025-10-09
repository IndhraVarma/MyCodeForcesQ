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
    map<int,int>last_pos;
    map<int,int>diff;
    map<int,int>valid;
    map<int,int>count;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        count[x]++;
        if(count[x]==1){
            last_pos[x]=i;
            valid[x]=true;
        }else if(count[x]==2){
            diff[x]=i-last_pos[x];
            last_pos[x]=i;
        }else{
            if(i-last_pos[x]!=diff[x]){
                valid[x]=false;
            }
            last_pos[x]=i;
        }
    }
    int total=0;
    for(auto p:count){
        int x=p.first;
        if(valid[x]){
            total++;
        }
    }
    cout<<total<<endl;
    for(auto p:count){
        int x=p.first;
        if(valid[x]){
            if(count[x]==1){
                cout<<x<<" "<<0<<endl;
            }else{
                cout<<x<<" "<<diff[x]<<endl;
            }
        }
    }
    return 0;
}