#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    int x,y,m;
    cin>>x>>y>>m;
    int n=m/min(x,y);
    int high=0;
    for(int i=0; i*x<=m; i++){
        for(int j=0; j*y+i*x<=m; j++){
            if(i*x+j*y<=m){
                high=max(high,i*x+j*y);
            }
        }
    }
    cout<<high;
    return 0;
}