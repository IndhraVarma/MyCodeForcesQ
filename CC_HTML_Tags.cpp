#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    cin>>s;
    int n=s.size();

    if(n<4 || s[0]!='<' || s[1]!='/' || s[n-1]!='>'){
        cout<<"Error"<<endl;
        return;
    }

    bool valid=true;

    for(int i=2; i<n-1; i++){
        if(!((s[i]>='a'&& s[i]<='z') || (s[i]>='0' && s[i]<='9'))){
            valid=false;
            break;
        }
    }
    if(valid && n>3){
        cout<<"Success"<<endl;
    }else{
        cout<<"Error"<<endl;
    }
}

int main() {
    int tt;
    cin >> tt; // Number of test cases
    while (tt--) {
        solve(); // Call solve() for each test case
    }
    return 0;
}