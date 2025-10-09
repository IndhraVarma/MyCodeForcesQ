#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include<cmath>

using namespace std;

int main() {
    int n;
    cin>>n;
    vector<long long>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    //11233
    long long minVal=arr[0];
    long long maxVal=arr[n-1];

    long long maxDiff=maxVal-minVal;

    long long countMin=0,countMax=0;

    for(int i=0; i<n; i++){
        if(arr[i]==minVal)countMin++;
        if(arr[i]==maxVal)countMax++;
    }
    long long pairCount;
    if(maxDiff==0){
        pairCount=(long long)n*(n-1)/2;
    }else{
        pairCount=countMin*countMax;
    }
    cout<<maxDiff<<" "<<pairCount<<endl;
    return 0;
}
