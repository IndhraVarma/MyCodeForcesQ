#include<iostream>
#include<string>
#include<vector>
#include <cmath>
#include <climits>
#include<algorithm>

using namespace std;

int main(){
    int k;
    cin>>k;
    int sum=0;
    int count=0;
    vector<int>arr(12);
    for(int i=0; i<12; i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    for(int i=11; i>=0; i--){
        if(sum<k){
            sum+=arr[i];
            count++;
        }else{
            break;
        }
    }
    if(sum < k)
        cout << -1 << endl;
    else
        cout << count << endl;
    return 0;   
}