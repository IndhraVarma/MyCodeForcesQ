#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include<cmath>

using namespace std;

int main() {
    string s;
    cin>>s;
    int freq[26]={0};

    for(char c:s){
        freq[c-'a']++;
    }
    int odd_cnt=0;
    for(int i=0; i<26; i++){
        if(freq[i]%2!=0){
            odd_cnt++;
        }
    }
    if(odd_cnt==0 || odd_cnt%2==1){
        cout<<"First";
    }else{
        cout<<"Second";
    }
    return 0;
}
