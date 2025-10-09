#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>x(n);
    vector<int>y(n);

    int sumX=0,sumY=0;
    int mixed=0;

    for(int i=0; i<n; i++){
        cin>>x[i];
        sumX+=x[i];
        cin>>y[i];
        sumY+=y[i];
        if((x[i]&1)!=(y[i]&1)) mixed++;
    }
    if(sumX%2==0 && sumY%2==0){
        cout<<0<<endl;
    }else if((sumX%2!=0 && sumY%2!=0)&& mixed>0){
        cout<<1<<endl;
    }else{
        cout<<-1<<endl;
    }
    return 0;
}
