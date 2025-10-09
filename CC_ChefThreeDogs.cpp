#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        double s,v;
        cin>>s>>v;
        cout<<fixed<<setprecision(6)<<(2*s)/(3*v)<<endl;
    }
}