#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include<cctype>
 
using namespace std;

void makeLengthEqual(string &a, string &b){
    int len1= a.size();
    int len2= b.size();
    if(len1<len2) a= string(len2-len1,'0')+a;
    else if(len2<len1) b=string(len1-len2, '0')+b;
}
int main() {
    string a,b;
    cin>>a>>b;
    makeLengthEqual(a,b);
    string ans="";
    for(int i=0; i<a.size(); i++){
        if(a[i]==b[i]){
            ans+='0';
        }else{
            ans+='1';
        }
    }
    cout<<ans;

    return 0;
}