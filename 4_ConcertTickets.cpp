#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include<map>
#include<set>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    vector<int>ticketPrice(n);
    vector<int>custPrice(m);
    for(int i=0; i<n; i++){
        cin>>ticketPrice[i];
    }
    for(int i=0; i<m; i++){
        cin>>custPrice[i];
    }
    multiset<int>maxPrice;
    for(int i=0; i<ticketPrice.size(); i++){
        maxPrice.insert(ticketPrice[i]);
    }
    vector<int>ans;
    for(int i=0; i<m; i++){
        int temp=custPrice[i];
        multiset<int>::iterator itr= maxPrice.upper_bound(temp);
        if(itr==maxPrice.begin()){
            ans.push_back(-1);
        }else{
            itr--;
            ans.push_back(*itr);
            maxPrice.erase(itr);
        }
    }
    for(int i=0; i<m; i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}