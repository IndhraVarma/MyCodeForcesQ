#include<iostream>
#include<string>
#include<vector>
#include <algorithm>

using namespace std;

int toggle(int a){
    if(a==0) return 1;
    else return 0;
}

int main() {
    vector<vector<int>> vec(3, vector<int>(3));
    vector<vector<int>> ans(3, vector<int>(3,1));
    
    for(int i=0;i<3;i++){
        for(int j=0; j<3; j++){
            cin>>vec[i][j];    
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(vec[i][j]%2==1){
                ans[i][j]=toggle(ans[i][j]);
                if(i<2) ans[i+1][j] = toggle(ans[i+1][j]);
                if(i>0) ans[i-1][j] = toggle(ans[i-1][j]);
                if(j<2) ans[i][j+1] = toggle(ans[i][j+1]);
                if(j>0) ans[i][j-1] = toggle(ans[i][j-1]);
            }
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }

    return 0;
}