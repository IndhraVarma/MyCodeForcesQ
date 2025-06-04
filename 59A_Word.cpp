#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include<cctype>
 
using namespace std;
 
int main() {
    string s;
    cin>>s;
    int upper=0,lower=0;
    for(char i:s){
        if(isupper(i)) upper++;
        else if(islower(i)) lower++;
    }
    if(upper>s.size()/2){
        for(char &i :s){
            i=toupper(i);
        }
        cout<<s;
    }else if(lower> s.size()/2){
        for(char &i :s){
            i=tolower(i);
        }
        cout<<s;
    }else if(lower==upper){
        for(char &i :s){
            i=tolower(i);
        }
        cout<<s;
    }
    return 0;
}
