#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]>0 && arr[i]%2!=0){
            cout<<arr[i]/2+1<<endl;
        }else if(arr[i]>0 && arr[i]%2==0){
            cout<<arr[i]/2<<endl;
        }else if(arr[i]<0 && arr[i]%2==0){
            cout<<arr[i]/2<<endl;
        }else{
            cout<<abs(arr[i])/2+1;
        }
    }
}

int main() {
    int tt;
    cin >> tt;
    while(tt--) {
        solve();
    }
    return 0;
}