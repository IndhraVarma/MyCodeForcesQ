#include<iostream>
#include<string>
#include<vector>
#include <cmath>
#include <climits>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<string>grid(n);
    for(int i=0; i<n; i++){
        cin>>grid[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(grid[i][j]=='.'){
                if((i+j)%2==0){
                    grid[i][j]='B';
                }else{
                    grid[i][j]='W';
                }
            }
        }
    }
    for(int i=0;i<n; i++){
        cout<<grid[i]<<endl;
    }
    return 0;
}