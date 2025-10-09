#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,x,y;
    cin>>n>>x>>y;
    long long cakePerCar=y/x;
    long long car=(n+cakePerCar-1)/cakePerCar;
    cout<<car<<endl;
    return 0;
}