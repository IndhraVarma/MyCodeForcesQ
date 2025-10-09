#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include<cctype>

bool isVowel(char c){
    c=tolower(c);
    return((c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y'));
}
using namespace std;

int main() {
    string s;
    cin>>s;
    string ans="";
    for(char c:s){
        c=tolower(c);
        if(!isVowel(c)){
            ans+='.';
            ans+=c;
        }
    }
    cout<<ans;
    return 0;
}