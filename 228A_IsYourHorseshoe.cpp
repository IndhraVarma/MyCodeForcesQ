#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    vector<long long>arr(4);
    for(int i=0; i<4; i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int cnt=0;
    for(int i=0; i<3; i++){
        if(arr[i]==arr[i+1]){
            cnt++;
        }
    }
    cout<<cnt;    
    return 0;
}