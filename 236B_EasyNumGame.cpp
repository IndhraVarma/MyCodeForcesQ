#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    if(!(cin>>a>>b>>c))return 0;

    const int MOD=1073741824;
    int N=a*b*c;

    vector<int>d(N+1,0);
    for(int x=1; x<=N; x++)
        for(int m=x; m<=N; m+=x)
            d[m]++;

    long long ans=0;
    for(int i=1; i<=a; i++)
        for(int j=1; j<=b; j++)
            for(int k=1; k<=c; k++)
                ans=(ans+d[i*j*k])%MOD;

    cout<<ans%MOD<<endl;
    return 0;
}