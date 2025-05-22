#include<iostream>
#include<string>
#include<vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin>>n;
    int arr[10]={};
    bool f=0;

    for(int i=0; i<n; i++){
        int dig;
        cin>>dig;
        arr[dig]++;
        if(arr[0]>=3 && arr[1]>=1 && arr[2]>=2 && arr[3]>=1 && arr[5]>=1 && !f){
            cout<<i+1<<endl;
            f=1;
        }
    }
    if(!f) cout<<0<<endl;
}
int main() {
    int tt;
    cin >> tt; // Number of test cases
    while (tt--) {
        solve(); // Call solve() for each test case
    }
}