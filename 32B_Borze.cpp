#include<iostream>
#include<string>
#include<vector>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin>>s;
    int n=s.size();
    string ans;
    for(int i=0;i<n; i++){
        if(s[i]=='-' && s[i+1]=='.'){
            ans+= '1';
            i++;
        }else if(s[i]=='-' && s[i+1]=='-'){
            ans+= '2';
            i++;
        }else if(s[i]=='.'){
            ans+='0';
        }
    }
    cout<<ans;
    return 0;
}
