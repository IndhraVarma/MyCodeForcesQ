#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include<cctype>
#include<map>
 
using namespace std;
 
int main() {
    string s1,s2;
    bool f1=true;

    getline(cin, s1);
    getline(cin,s2);
    map<char,int>mp;
    
    for(int i=0; i<s1.length(); i++){
        mp[s1[i]]++;
    }
    for(int i=0; i<s2.length(); i++){
        if(mp[s2[i]]>0 || s2[i]==' '){
            mp[s2[i]]--;
            continue;
        }else{
            f1=false;
            break;
        }
    }
    if(f1==true){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    
    return 0;
}

