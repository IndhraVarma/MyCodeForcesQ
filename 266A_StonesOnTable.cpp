#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include<cctype>
 
using namespace std;
 
int main() {
    int n;
    cin>>n;
    string s;
    cin>>s; //RRG
    int ans=0;
    for(int i=1; i<n; i++){
        if(s[i]==s[i-1]){
            ans++;
        }
    }
    
    cout<<ans;
    return 0;
}