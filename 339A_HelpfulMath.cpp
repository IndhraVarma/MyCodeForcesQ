#include<iostream>
#include<string>
#include<vector>
#include <set>


using namespace std;

int main() {
    string x;
    cin>>x;
    int n=x.size();
    int cnt1=0,cnt2=0,cnt3=0;    //1231213
    for(int i=0; i<n; i++){
        if(x[i]=='1'){
            cnt1++;
        }else if(x[i]=='2'){
            cnt2++;
        }else if(x[i]=='3'){
            cnt3++;
        }
    }
    string ans="";
 
    for (int i = 0; i < cnt1; i++) ans += "1+";
    for (int i = 0; i < cnt2; i++) ans += "2+";
    for (int i = 0; i < cnt3; i++) ans += "3+";
 
    if (!ans.empty()) ans.pop_back();
    cout<<ans;
    return 0;
}