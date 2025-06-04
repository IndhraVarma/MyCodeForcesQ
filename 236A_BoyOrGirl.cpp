#include<iostream>
#include<string>
#include<vector>
#include <set>


using namespace std;

int main() {
    string x;
    cin>>x;
    int n=x.size();
    set<char>ans;
    for(auto i: x){
        ans.insert(i);
    }
    int m= ans.size();
    if(m%2==0){
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}