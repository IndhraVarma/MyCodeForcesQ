#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int cnt=1;
    vector<pair<int,int>>times(n);
    for(int i=0; i<n; i++){
        int hrs,mins;
        cin>>hrs>>mins;
        times[i]={hrs,mins};
    }
    int maxi=1;
    for(int i=0; i<times.size()-1; i++){
        if(times[i]==times[i+1]){
            cnt++;
        }else{
            cnt=1;
        }
        maxi=max(cnt,maxi);
    }
    cout<<maxi<<endl;

    return 0;
}