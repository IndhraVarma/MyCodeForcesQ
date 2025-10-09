#include<iostream>
#include<string>
#include<vector>
#include <cmath>
#include <climits>
#include<algorithm>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int>arr(n);
    int sum=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    for(int i=0; i<m && arr[i]<0; i++){
        sum+=abs(arr[i]);
    }
    cout<<sum<<endl;
    return 0;   
}