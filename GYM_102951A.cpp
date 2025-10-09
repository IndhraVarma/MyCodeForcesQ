#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>x(n);
    vector<int>y(n);
    int high=0;
    for(int i=0; i<n; i++){
        cin>>x[i];
    }
    for(int i=0; i<n; i++){
        cin>>y[i];
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int xi=x[j]-x[i];
            int yi=y[j]-y[i];
            high=max(high,xi*xi+yi*yi);
        }
    }
    cout<<high;
    return 0;
}