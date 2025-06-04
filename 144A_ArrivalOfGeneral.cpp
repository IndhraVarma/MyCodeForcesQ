#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int highest= INT_MIN;
    int lowest= INT_MAX;
    int minIndex=-1,maxIndex=-1;
    for(int i=0; i<n; i++){
        if(arr[i]>highest){
            highest= arr[i];
            maxIndex=i;
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i]<=lowest){
            lowest = arr[i];
            minIndex=i;
        }
    }
    int steps = maxIndex + (n - 1 - minIndex);
    if(maxIndex>minIndex){
        steps--;
    }
    cout<<steps;
    return 0;
}
