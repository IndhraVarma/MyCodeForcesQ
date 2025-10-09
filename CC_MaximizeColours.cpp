#include <bits/stdc++.h>

using namespace std;

void solve() {
    int x,y,z;
    cin>>x>>y>>z;
    int arr[3]={x,y,z};
    
    int cnt=0; 

    if(arr[0]>0){
        cnt++;
        arr[0]--;
    }
    if(arr[1]>0){
        cnt++;
        arr[1]--;
    }
    if(arr[2]>0){
        cnt++;
        arr[2]--;
    }

    sort(arr,arr+3,greater<int>());

    if(arr[0]>=1 && arr[1]>=1){
        cnt++;
        arr[0]--;
        arr[1]--;
    }
    if(arr[1]>=1 && arr[2]>=1){
        cnt++;
        arr[1]--;
        arr[2]--;
    }
    if(arr[0]>=1 && arr[2]>=1){
        cnt++;
        arr[0]--;
        arr[2]--;
    }
    cout<<cnt<<endl;
}
int main() {
    int tt;
    cin >> tt; // Number of test cases
    while (tt--) {
        solve(); // Call solve() for each test case
    }
    return 0;
}