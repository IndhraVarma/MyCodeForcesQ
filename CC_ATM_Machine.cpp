#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include<queue>
#include<climits>

using namespace std;

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int>money(n);
    for(int i=0; i<n; i++){
        cin>>money[i];
    }
    for(int i=0; i<n; i++){
        if(money[i]<=k){
            cout<<1;
            k-=money[i];
        }else{
            cout<<0;
        }
    }
    cout<<endl;
}
int main() {
    int tt;
    cin >> tt; // Number of test cases
    while (tt--) {
        solve(); // Call solve() for each test case
    }
    return 0;
}