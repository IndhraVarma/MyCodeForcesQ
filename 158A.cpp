#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int count=0;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        if(val>k){
            count++;
        }
    }
    cout<<count;
    return 0;
}