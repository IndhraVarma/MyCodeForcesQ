#include<bits/stdc++.h>
using namespace std;
const long long MOD = 1000000007;

int main(){
    int x,y,n;
    cin>>x>>y>>n;
    
    vector<long long>seq(6);
    seq[0]=x;
    seq[1]=y;
    seq[2]=y-x;
    seq[3]=-x;
    seq[4]=-y;
    seq[5]=x-y;

    long long ans=seq[(n-1)%6];
    ans=((ans%MOD)+MOD)%MOD;
    cout<<ans<<endl;
    return 0;
}