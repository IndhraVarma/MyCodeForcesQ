#include<iostream>
#include<string>
#include<vector>
#include <cmath>
#include <climits>

using namespace std;

int main(){
    int n,i,mx =0,p;
    double m;
    cin>>n>>m;
    int x =0;
    vector<int>a(n);
    for(i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        if(ceil(x/m)>=mx)
        {
            mx = ceil(x/m);
            p =i;
        }
    }
    cout<<p<<endl;

    return 0;
}