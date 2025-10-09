#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include<map>

using namespace std;

int main() {
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>sizeByPerson(n);
    vector<int>x(m);
    int cnt=0;
    for(int i=0; i<n; i++){
        cin>>sizeByPerson[i];
    }
    for(int i=0; i<m; i++){
        cin>>x[i];
    }
    sort(sizeByPerson.begin(), sizeByPerson.end());
    sort(x.begin(), x.end());
    int j=0,i=0;
    while(i<n && j<m ){
        if(abs(sizeByPerson[i]-x[j])<=k){
            cnt++;
            i++;
            j++;
        }else if(sizeByPerson[i]<x[j]){
            i++;
        }else{
            j++;
        }
    }
    cout<<cnt;
    return 0;
}
