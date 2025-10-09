#include<bits/stdc++.h>
using namespace std;

int main(){
    long long y,k,n;
    cin>>y>>k>>n;
    bool yes=false;

    long long st=k-(y%k);
    if(st==0) st=k;

    for(long long i=st; i<=n-y; i+=k){
        cout<<i<<" ";
        yes=true;
    }
    
    if(!yes){
        cout<<-1<<endl;
    }
    return 0;
}