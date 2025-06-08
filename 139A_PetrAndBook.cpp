#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(7);
    for(int i=0; i<7; i++){
        cin>>arr[i];
    }
    int day=0;
    while(true){
        n-=arr[day];
        if(n<=0){
            cout<<day+1<<endl;
            break;
        }
        day=(day+1)%7;
    }
    
    return 0;   
}