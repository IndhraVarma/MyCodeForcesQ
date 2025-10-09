#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<char>>arr(4,vector<char>(4));
    bool flag=false;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            int white=0;
            int black=0;

            if(arr[i][j]=='#') black++;
            else white++;
            if(arr[i+1][j]=='#') black++;
            else white++;
            if(arr[i][j+1]=='#') black++;
            else white++;
            if(arr[i+1][j+1]=='#') black++;
            else white++;

            if((white==3 && black==1) || (white==1 &&black==3) || (white==4 && black==0)|| (white==0 && black==4)){
                flag=true;
            }
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}