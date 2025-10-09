#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include<cctype>
#include<map>
 
using namespace std;
 
int main() {
    string s1,s2;
    cin>>s1>>s2;
    if(s1.length()!=s2.length()){
        cout<<"NO";
        return 0;
    }
    vector<int>diff;
    for(int i=0; i<s1.length(); i++){
        if(s1[i]!=s2[i]){
            diff.push_back(i);
        }
    }
    if(diff.size()==2 && s1[diff[0]]==s2[diff[1]] && s1[diff[1]]==s2[diff[0]]){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
