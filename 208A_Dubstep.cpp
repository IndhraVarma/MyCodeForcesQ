#include<iostream>
#include<string>
#include<vector>
#include <cmath>
#include <climits>
#include<algorithm>

using namespace std;

int main(){
    string s;
    cin>>s;
    string sub="WUB";
    size_t pos;;
    while((pos=s.find(sub))!=string::npos){
        s.replace(pos,3," ");
    }
    s.erase(unique(s.begin(),s.end(),[](char a, char b){return a==' ' &&b==' ';}),s.end());
    if (!s.empty() && s.front() == ' ') s.erase(s.begin());
    if (!s.empty() && s.back() == ' ') s.pop_back();
    cout<<s;
    return 0;   
}