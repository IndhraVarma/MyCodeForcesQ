#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int total_vol=k*l;
    int toasts=total_vol/nl;
    int salt_avl=p/np;
    int limes_avl =  c*d;
    int mini=min(toasts,limes_avl);
    int mini2= min(mini,salt_avl);
    int ans= mini2/n;
    cout<<ans;
    return 0;
}