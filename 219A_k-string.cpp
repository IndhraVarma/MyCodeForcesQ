#include<iostream>
#include<string>
#include<vector>
#include <cmath>
#include <map>
#include<algorithm>

using namespace std;

int main(){
    int k;
    cin>>k;
    string s;
    cin>>s;
    map<char,int>freq;
    for(char c:s){
        freq[c]++;
    }
    string part="";
    for(auto i:freq){
        if(i.second % k!=0){
            cout<<-1<<endl;
            return 0;
        }
        part+=string(i.second/k, i.first);
    }
    string res="";
    for(int i=0; i<k; i++){
        res+=part;
    }
    cout<<res<<endl;

    return 0;   
}