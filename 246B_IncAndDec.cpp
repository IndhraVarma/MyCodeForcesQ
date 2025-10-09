#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    long long n;
    cin>>n;
    vector<int>arr(n);
    long long sum=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum%n==0) cout<<n;
    else cout<<n-1;
    
    return 0;
}