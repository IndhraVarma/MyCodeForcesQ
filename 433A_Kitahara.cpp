#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include<cctype>
#include<map>
 
using namespace std;
 
int main() {
    int n;
    cin>>n;

    int count100=0,count200=0,x;
    for(int i=0; i<n; i++){
        cin>>x;
        if(x==100)count100++;
        else count200++;
    }
    int total=count100*100+count200*200;
    if(total%200!=0){
        cout<<"NO";
        return 0;
    }
    int half=total/2;

    for(int i=0; i<=count200; i++){
        int wOf200= i*200;
        if(wOf200>half)continue;
        int remaining= half-wOf200;
        if(remaining<=count100*100 && remaining%100==0){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
