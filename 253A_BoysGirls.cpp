#include<bits/stdc++.h>
using namespace std;

int main(){
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    int n,m;
    cin>>n>>m;
    int mini=min(n,m);
    for(int i=0; i<mini; i++){
        if(mini==n){
            cout<<"GB";
        }else if(mini==m){
            cout<<"BG";
        }else{
            cout<<"BG";
        }
    }
    if(mini==n){
        for(int i=0; i<m-mini; i++){
            cout<<"G";
        }
        cout<<endl;
    }else if(mini==m){
        for(int i=0; i<n-mini; i++){
            cout<<"B";
        }
        cout<<endl;
    }
    return 0;
}