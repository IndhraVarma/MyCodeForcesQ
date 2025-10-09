#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n,tt,l,r,type;
    cin>>n;
    vector<long long>arr(n);
    for(long long i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<long long>pref1(n+1,0);
    for(int i=0; i<n; i++){
        pref1[i+1]=pref1[i]+arr[i];
    }

    vector<long long>pref2(n+1,0);
    vector<long long>sortedArr=arr;
    sort(sortedArr.begin(),sortedArr.end());
    for(int i=0; i<n; i++){
        pref2[i+1]=pref2[i]+sortedArr[i];
    }
    cin>>tt;
    while(tt--){
        cin>>type>>l>>r;
        if(type==1){
            cout<<pref1[r]-pref1[l-1]<<endl;
        }else{
            cout<<pref2[r]-pref2[l-1]<<endl;
        }
    }
    return 0;
}