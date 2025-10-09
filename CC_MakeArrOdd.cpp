#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n,x;
    cin>>n>>x;
    int arr[n];
    int even=0, odd=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    if(x % 2!=0){
        cout<<(even+1)/2<<endl;
    }else{
        if(odd==0){
            cout<<-1<<endl;
        }else{
            cout<<even<<endl;
        }
    }
}
int main() {
    int tt;
    cin>>tt; // Number of test cases
    while (tt--) {
        solve(); // Call solve() for each test case
    }
    return 0;
}