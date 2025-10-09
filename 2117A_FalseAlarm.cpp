#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,x;
    cin>>n>>x;
    vector<int>arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];

    int buttonTime=0;
    bool used=false;

    for(int i=0; i<n; i++){
        if(arr[i]==0){
            buttonTime=max(0,buttonTime-1);
        }else{
            if(!used){
                used=true;
                buttonTime=x-1;
            }else if(buttonTime>0){
                buttonTime--;
            }else{
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
}
int main() {
    int tt;
    cin >> tt; // Number of test cases
    while (tt--) {
        solve(); // Call solve() for each test case
    }
    return 0;
}