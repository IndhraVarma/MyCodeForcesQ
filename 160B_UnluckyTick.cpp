#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    string a= s.substr(0,n);
    string b=s.substr(n);

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int lesser=true,greater=true;
    for(int i=0; i<n; i++){
        if(a[i]>=b[i]) greater=false;;
        if(a[i]<=b[i]) lesser=false;
    }
    if(lesser||greater) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}