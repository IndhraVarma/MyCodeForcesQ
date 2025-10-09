#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include<unordered_map>
#include<climits>

using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int  i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int currSum=0;
    for(int i=0; i<k; i++){
        currSum+=arr[i];
    }

    int minSum=currSum;
    int ans=0;

    for(int i=k; i<n; i++){
        currSum=currSum-arr[i-k]+arr[i];
        if(currSum<minSum){
            minSum=currSum;
            ans=i-k+1;
        }
    }
    cout<<ans+1;
    return 0;
}