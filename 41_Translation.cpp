#include<iostream>
#include<string>
#include<vector>
#include <algorithm>

using namespace std;
string reverse(string s){
    string ans;
    for(int i=s.size()-1; i>=0; i--){
        ans+=s[i];
    }
    return ans;
}
int main() {
    string b1,b2;
    cin>>b1>>b2;
    if(b1==reverse(b2)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}