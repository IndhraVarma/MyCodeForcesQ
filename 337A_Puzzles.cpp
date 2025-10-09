#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include<climits>
 
using namespace std;
 
int main() {
    int n,m;
    cin>>n>>m;
    vector<int>pieces(m);
    for(int i=0; i<m; i++){
        cin>>pieces[i];
    }
    sort(pieces.begin(),pieces.end());

    int min_diff=INT_MAX;
    for(int i=0; i<=m-n; i++){
        int diff=pieces[i+n-1]-pieces[i];
        min_diff=min(min_diff,diff);
    }
    cout<<min_diff;
    return 0;
}