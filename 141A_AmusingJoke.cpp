#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    string a,b,c;
    cin>>a>>b>>c;
    string combo=a+b;
    sort(combo.begin(),combo.end());
    sort(c.begin(),c.end());
    if(combo==c){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}