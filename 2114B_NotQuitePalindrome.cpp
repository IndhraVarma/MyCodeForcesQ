#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int ze=0,oe=0;
    for(int i=0; i<n; i++){
        if(s[i]=='1'){
            oe++;
        }else{
            ze++;
        }
    }
    for(int i=0; i<k; i++){
        if(oe>=ze){
            oe-=2;
        }else{
            ze-=2;
        }
    }
    if(ze>=0 && oe>=0 && oe==ze){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
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