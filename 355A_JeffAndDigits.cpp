#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include<climits>

using namespace std;

int main() {
    int n;
    cin>>n;
    int cnt5=0;
    int cnt0=0;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        if(x==5) cnt5++;
        else cnt0++;
    }
    if(cnt0==0){
        cout<<-1<<endl;
        return 0;
    }
    cnt5=(cnt5/9)*9;

    if(cnt5==0){
        cout<<0<<endl;
        return 0;
    }
    for(int i=0; i<cnt5; i++) cout<<5;
    for(int i=0; i<cnt0; i++) cout<<0;
    cout<<endl;
    return 0;
}